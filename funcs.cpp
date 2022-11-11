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

//task E:


Coord3D* createCoord3D(double x, double y, double z)
{
cout<<"\ndynamically allocated memory for structure"<<endl;
Coord3D* ppos = new Coord3D;
ppos->x = x;
ppos->y = y;
ppos->z = z;
return ppos;
}

void deleteCoord3D(Coord3D *p)
{
cout<<"Deleting the structure"<<endl;
delete p;
}

void move(Coord3D pp, Coord3D pv, double t)
{
pp->x = (pv->x*t)+pp->x;
pp->y = (pv->y*t)+pp->y;
pp->z = (pv->z*t)+pp->z;
}
