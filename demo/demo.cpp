#include <iostream>
#include <fstream>
#include <string>
#include <cstddef>

#include "../src/turtle.hpp"

using namespace std;

void rect(Turtle& t, float width, float height) {
  t.forward(width);
  t.right(90);
  t.forward(height);
  t.right(90);
  t.forward(width);
  t.right(90);
  t.forward(height);
  t.right(90);
}

void meetTurtle() {
  Turtle t;
  t.satinon(0.3);
  t.pendown();  
  rect(t, 20, 30);
  t.end();
  t.save("demo.dst");
}

int main() {
    meetTurtle();
}
