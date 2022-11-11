/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 9 A-B-C-E
Here, I wrote a program in which you define a function length() that receives the coordinates of a point P passed as a pointer, 
and computes the distance from the origin to the point P
*/

#include <iostream>
#include <math.h>
using namespace std;

struct Coord3D {

double x;
double y;
double z;

};

double length(Coord3D *p)
{
double len = sqrt(pow(p->x,2) + pow(p->y,2) + pow(p->z,2)); 
return len;
}


