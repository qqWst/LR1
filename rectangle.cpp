#include <iostream>
#include <cmath>
using namespace std;
//comment
void calRectangle(double length, double width) {
    if (length <= 0 || width <= 0) {
        cout << "Width and length should be positive!" << endl;
        return;
    }

    double perimeter = 2 * (length + width);
    double area = length * width;
    double diagonal = sqrt(length * length + width * width);

    cout << "Rectengle:" << endl;
    cout << "Length: " << length << ", Width: " << width << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;
}
