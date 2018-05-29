//
// Created by damin on 26/05/18.
//

#ifndef SP2_PARTICLE_H
#define SP2_PARTICLE_H

#include <math.h>
#include <iostream>
using namespace std;

class Particle{
public:
    int x, y, deltaX, deltaY;
    Particle();
    void move();
    virtual float area();
    virtual float perimeter();
    virtual void imprimir();
    ~Particle();
};

class Circle:public Particle{
    int diameter;
public:
    Circle(int, int, int ,int, int);
    float area() override ;
    float perimeter() override ;
    void imprimir() override;
};

class Rectangle:public Particle{
    int width, length;
public:
    Rectangle(int, int ,int ,int ,int , int );
    float area() override;
    float perimeter() override;
    void imprimir() override;

};

class Triangle:public Particle{
    int width,length;
public:
    Triangle(int,int,int,int ,int , int );
    float area() override ;
    float perimeter() override ;
    void imprimir() override;

};

class Line:public Particle{
    int x2,y2;
public:
    Line(int,int,int,int ,int x2,int y2);
    float area()override {return 0;} ;
    float perimeter()override ;
    void imprimir() override;

};

#endif //SP2_PARTICLE_H
