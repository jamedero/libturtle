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

void softrect(Turtle& t, float width, float height) {
  t.forward(width);
  t.rcurve(90, 10);
  t.forward(height);
  t.rcurve(90, 10);
  t.forward(width);
  t.rcurve(90, 10);
  t.forward(height);
  t.rcurve(90, 10);
}

void meetTurtle() {
  Turtle rt;
  rt.satinon(0.3);
  rt.pendown();  
  rect(rt, 20, 30);
  rt.end();
  rt.save("demo_rect.dst");

  Turtle srt;
  srt.satinon(0.3);
  srt.pendown();  
  softrect(srt, 20, 30);
  srt.end();
  srt.save("demo_softrect.dst");
}

int main() {
    meetTurtle();
}
