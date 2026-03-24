#include <math.h>
#include <iostream>

using namespace std;
//eto ya
void triangle(int side1, int side2, int side3, int &perimeter, double &area, bool &isIsosceles){
    perimeter = side1 + side2 + side3;
    double halfPerimeter = perimeter / 2.0;
    area = sqrt(halfPerimeter * (halfPerimeter - side1) * (halfPerimeter - side2) * (halfPerimeter - side3));
    if (side1 == side2 || side2 == side3 || side1 == side3){ 
        isIsosceles = 1;
    }else isIsosceles = 0;
}
