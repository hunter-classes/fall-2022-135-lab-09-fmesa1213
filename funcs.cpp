#include <iostream>
#include "funcs.h"
#include "3d-space.cpp"
#include <math.h>
using namespace std;

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

//task C:

struct Coord3D

{
double x;
double y;
double z;
};

void move(Coord3D *ppos, Coord3D *pvel, double dt)

{
Coord3D &v = *ppos;
Coord3D &X = *pvel;

v.x = v.x + (X.x*dt);
v.y = v.y + (X.y*dt);
v.z = v.z + (X.z*dt);
*ppos = v;
}
