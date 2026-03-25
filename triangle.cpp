#include <math.h>
#include <iostream>

using namespace std;
//comment
int triangle(double side1, double side2, double side3){
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        cout << "Sides should be positive!!!";
	return 0;
    }
    if (side1 > (side2 + side3) || side2 > (side1 + side3) || side3 > (side1 + side2)) {
	cout << "This triangle doesn't exists!!!";
	return 0;
    }
    double perimeter = side1 + side2 + side3;
    double halfPerimeter = perimeter / 2.0;
    double area = sqrt(halfPerimeter * (halfPerimeter - side1) * (halfPerimeter - side2) * (halfPerimeter - side3));
    bool isIsosceles;
    if (side1 == side2 || side2 == side3 || side1 == side3){ 
        isIsosceles = 1;
    }else isIsosceles = 0;
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
    cout << "Is isosceles? " << (isIsosceles ? "Yes" : "No") << endl;
    return 0;
}
