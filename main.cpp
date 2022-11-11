#include <iostream>
#include <math.h>
#include "funcs.h"
#include "3d-space.cpp"
using namespace std;


//task a
int main()
{
  Coord3D pointP = {10, 20, 30};
cout << length(&pointP) << endl; 
  return 0;
}


//task b
int main() 
{
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; 
  return 0;
}

//task c

int main()
{
Coord3D pos = { 0, 0, 100.0 };
Coord3D vel = { 1, -5, 0.2 };
move(&pos, &vel, 2.0);
cout << pos.x << " " << pos.y << " " << pos.z << endl;

return 0;
}


// task e

int main()
{
double x, y, z;
cout<<"Enter position: ";
cin>>x>>y>>z;
  
Coord3D *ppos = createCoord3D(x, y, z);
cout<<"\nEnter Velocity:";
cin>>x>>y>>z;
  
Coord3D *pvel = createCoord3D(x, y, z);
move(ppos, pvel, 10.0);
cout<<"Coordinates after 10 seconds: "<<(*ppos).x<<" "<<(*ppos).y<<" "<<(*ppos).z<<endl;
  
deleteCoord3D(ppos);
deleteCoord3D(pvel);
return 0;
}
