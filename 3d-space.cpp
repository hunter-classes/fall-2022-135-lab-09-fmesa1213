/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 7 B
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


//task B:

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

if( ((p1->x * p1->x) + (p1->y * p1->y) + (p1->z * p1->z)) > ((p2->x * p2->x) + (p2->y * p2->y) + (p2->z * p2->z)))
{
return p1;
} 
else 
{
return p2;
}
  return 0;
}
