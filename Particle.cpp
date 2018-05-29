//
// Created by damin on 26/05/18.
//

#include "Particle.h"

float Particle::area() {
    return 0;
}

float Particle::perimeter() {
    return 0;
}

void Particle::move() {
    x += deltaX;
    y += deltaY;
}

void Particle::imprimir() {
    cout<<"current Posx: "<<x<<endl;
    cout<<"current Posy: "<<y<<endl;
    cout<<"Area: "<< area()<<endl;
    cout<<"Perimeter: "<<perimeter()<<endl;
}

Particle::~Particle() = default;

Particle::Particle() = default;

Circle::Circle(int x1, int y1, int dx, int dy, int d) : Particle() {
    x = x1;
    y = y1;
    deltaX = dx;
    deltaY = dy;
    diameter = d;
}

float Circle::area() {
    return (M_PI*pow(diameter/2,2));
}

float Circle::perimeter() {
    return (2*M_PI*(diameter/2));
}

void Circle::imprimir() {
    cout<<"Circle: "<<endl;
    Particle::imprimir();
}

Rectangle::Rectangle(int x1, int y1, int dx, int dy, int w, int l):Particle(){
    x = x1;
    y = y1;
    deltaX = dx;
    deltaY = dy;
    width = w;
    length = l;
}

float Rectangle::area() {
    return (width*length);
}

float Rectangle::perimeter() {
    return (2*(width+length));
}

void Rectangle::imprimir() {
    cout<<"Rectangle: "<<endl;
    Particle::imprimir();
}

Triangle::Triangle(int x1, int y1, int dx, int dy, int w, int l):Particle(){
    x = x1;
    y = y1;
    deltaX = dx;
    deltaY = dy;
    width = w;
    length = l;
}

float Triangle::area() {
    return (width*length/2);
}
float Triangle::perimeter() {
    double c = sqrt(pow(width,2)+pow(length,2));
    return(width+length+c);
}

void Triangle::imprimir() {
    cout<<"Triangle: "<<endl;
    Particle::imprimir();
}

Line::Line(int x1, int y1, int dx, int dy, int x_2, int y_2) {
    x = x1;
    y = y1;
    deltaX = dx;
    deltaY = dy;
    x2 = x_2;
    y2 = y_2;
}

float Line::perimeter() {
    return (sqrt(pow(x2-x,2)+pow(y2-y,2)));
}

void Line::imprimir(){
    cout<<"Line: "<<endl;
    Particle::imprimir();
}