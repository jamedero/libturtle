#include <iostream>
#include <fstream>
#include <string>
#include <cstddef>

#include "../src/turtle.hpp"

using namespace std;

void honeycomb(Turtle &t, int generations, float step) {
    // Rules to create honeycomb
    char chr_1 = 'A';
    string rule_1 = "AB";
    char chr_2 = 'B';
    string rule_2 = "A";
    string axiom = "A";

    for (int i = 0; i < generations; i++)
        {
        string res = "";
        for (char &chr : axiom)
        {
            if (chr == chr_1)
            {
            res += rule_1;
            }
            else
            {
            res += rule_2;
            }
        }
        axiom = res; 
    }
    // Once final axiom has been generated, 
    // move turtle according to it
    for (char &chr : axiom)
    {
        if (chr == chr_1)
        {
            t.turn(-60);
            t.forward(step);
        }
        else
        {
            t.turn(60);
            t.forward(step);
        }
    }
}
void sierpinski_triangle(Turtle &t, int generations, float step) {
    // Rules to create triangle fractal
    char chr_1 = 'F';
    string rule_1 = "F-G+F+G-F";
    char chr_2 = 'G';
    string rule_2 = "GG";
    string axiom = "F";

    // For every generation, generate new axiom
    // based on the previous generation's axiom
    for (int i = 0; i < generations; i++)
    {
    string res = "";
    for (char &chr : axiom)
    {
        if (chr == chr_1)
        {
        res += rule_1;
        }
        else if (chr == chr_2)
        {
        res += rule_2;
        }
        else
        {
        res += chr;
        }
    }
    axiom = res; 
    }

    // Once final axiom has been generated, 
    // move turtle according to it
    for (char &chr : axiom)
    {
    if (chr == chr_1 || chr == chr_2)
    {
        t.forward(step);
    }
    else if (chr == '+')
    {
        t.turn(120);
    }
    else
    {
        t.turn(-120);
    }
    }
}

void meetTurtle()
{
  Turtle t;
  t.satinon(0.3);
  t.pendown();
  honeycomb(t, 7, 5);
  //sierpinski_triangle(t, 3, 5);
  t.end();
  t.save("recursionExample.dst");
}

int main()
{
  meetTurtle();
}