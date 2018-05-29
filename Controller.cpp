//
// Created by damin on 26/05/18.
//
#include "Controller.h"

void Controller::move_all() {
    for(auto &x: particles){
        x->move();
    }
}

float Controller::total_area() {
    float tot_ar = 0;
    for(auto &x:particles){
        tot_ar+=x->area();
    }
    return tot_ar;
}

float Controller::total_perimeter() {
    float tot_per = 0;
    for(auto &x:particles){
        tot_per+=x->perimeter();
    }
    return tot_per;
}

int Controller::count_all() {
    return particles.size();
}

int Controller::count_collisions() {
    int counter = 0;
    for(auto& a:particles){
        for(auto &b:particles){
            if(a!=b) {
                if ((a->x == b->x) && (a->y == b->y)) {
                    counter += 1;
                }
            }
        }
    }
    return counter/2;
}

Controller::Controller(vector<Particle *> v) {
    particles = v;
}




