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

void poly(Turtle& t, float size, int sides) {

  if (sides < 3){
    std::cout << "Polygon  must be at least 3 sides";
  } else{
    for (int x = 0; x < sides; ++x){
      t.forward(size);
      degree = 360.0 / sides;
      t.left(degree);
    }
  }
}


void meetTurtle() {
  Turtle t;
  t.satinon(0.3);
  t.pendown();  
  //rect(t, 20, 30);
  poly(t, 20, 3);
  t.end();
  t.save("demo.dst");
}

int main() {
    meetTurtle();
}
