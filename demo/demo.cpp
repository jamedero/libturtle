#include <iostream>
#include <fstream>
#include <string>
#include <cstddef>

#include "../src/turtle.hpp"

using namespace std;

void rect(Turtle &t, float width, float height)
{
  t.forward(width);
  t.right(90);
  t.set_decor_stitch(3);
  t.forward(height);
  t.right(90);
  t.set_decor_stitch(1);
  t.forward(width);
  t.right(90);
  t.set_decor_stitch(2);
  t.forward(height);
  t.right(90);
}

void penta(Turtle &t, float width)
{
  t.decor_on(0);
  for (int i = 0; i < 5; i++)
  {
    t.set_decor_stitch(i);
    t.forward(width);
    t.left(72);
  }
}

void octa(Turtle &t, float width)
{

  t.decor_on(0);
  for (int i = 0; i < 8; i++)
  {
    if (i == 7)
    {
      t.decor_off();
    }
    else
    {
      t.set_decor_stitch(i);
    }

    t.forward(width);
    t.left(45);
  }
}

void meetTurtle()
{
  Turtle t;
  // t.satinon(0.3);

  t.pendown();
  // t.forward(10);
  //  t.decor_on(5);
  //  t.decor_on(6);

  octa(t, 30);
  //  t.decor_on(4);
  //  rect(t, 30, 30);

  // penta(t, 50);
  // t.forward(60);
  t.end();
  t.save("demo.dst");
}

int main()
{
  meetTurtle();
}
