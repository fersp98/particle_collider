//
// Created by damin on 26/05/18.
//

#ifndef SP2_CONTROLLER_H
#define SP2_CONTROLLER_H

#include "Particle.h"
#include <vector>
class Controller{
    vector<Particle*> particles;
public:
    explicit Controller(vector<Particle*> v);
    void move_all();
    float total_area();
    float total_perimeter();
    int count_all();
    int count_collisions();
};
#endif //SP2_CONTROLLER_H
