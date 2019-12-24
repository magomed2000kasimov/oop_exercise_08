//
// Created by magom on 23.12.2019.
//

#ifndef OOP_EXERCISE_08_POINT_H
#define OOP_EXERCISE_08_POINT_H

#include <iostream>

struct point {
    double x, y;
    point (double  a,double b) { x = a, y = b;};
    point() = default;
};

std::istream& operator >> (std::istream& is,point& p );
std::ostream& operator << (std::ostream& os,const point& p);

#endif //OOP_EXERCISE_08_POINT_H
