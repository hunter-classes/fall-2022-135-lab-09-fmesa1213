#include <iostream>
#include <math.h>
#include "funcs.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
cout << length(&pointP) << endl; 
  return 0;
}

int main() {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; 
  return 0;
}

