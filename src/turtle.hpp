#ifndef turtlehincluded
#define turtlehincluded

#include <iostream>
#include "emb-pattern.h"
#include "point.hpp"
#include <map>

class Turtle {
 public:
    Turtle();
    ~Turtle();

    void setStepSize(float step);
    void satinon(float delta);
    void satinoff();
    void pendown();
    void penup();
    Point position();

    void turntoward(const Point& pos);
    void turntoward(const float x, const float y);
    void setdir(const Point& pos);
    void setdir(const float x, const float y);
    void turn(const float degreesccw);
    void right(float degreesccw);
    void left(float degreesccw);
    void rcurve(int degree, int len);
    void lcurve(int degree, int len);

    void move(const Point& delta);
    void move(const float x, const float y);
    void gotopoint(const Point& pos);
    void gotopoint(const float x, const float y);
    void forward(const float dist);
    void backward(const float dist);

    void displayMessage(std::string message, float scale);

    void save(std::string fname);
    void end();

    friend std::ostream& operator<<(std::ostream& os, const Turtle& t);

 private:
    void stitch(const Point& pos);
    void stitch_abs(const Point& pos);
    void jump_to(const Point& pos);
    void stitch_to(const Point& pos);
    void satin_stitch_to(const Point& pos);
    void check_density(const Point& pos);
    void set_x(const float x);
    void set_y(const float y);
    void increment_x(const float x);
    void increment_y(const float y);
    // void rectangle(float w, float h);
    // void circle(float radius);
    // void snowflake(float sidelength, int levels);
    // void flakeside(float sidelength, int levels);
    // void squareSpiral(int line);
    // void tree(int branch);
    // void svtree(float trunklength, int levels, float trunkwidth);
 private:
    static const int DENSITY_PRECISION = 0;
    static const int DENSITY_WARN_LIMIT = 15;
    static const int DENSITY_ERROR_LIMIT = 20;
    EmbPattern* emb_;
    float stepsize_;
    int color_;
    bool pen_is_down_;
    bool satin_is_on_;
    float satin_delta_;
    Point dir_;
    Point position_;
    std::map<std::string, int> density_;
    bool density_error_;
    bool density_warning_;
};

#endif
