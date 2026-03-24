#include <iostream>
#include "triangle.cpp"
//#include "rectangle.cpp"

using namespace std;

int main(){

    int choice;
    cout << "1. Rectangle\n2. Triangle\nEnter your choice: ";
    cin >> choice;
    switch(choice){
       /* case 1:{
            double a, b;
            cout << "Enter length: ";
            cin >> a;
            cout << "Enter width: ";
            cin >> b;
            calRectangle(a, b);
            break;
        }*/
        case 2:{ 
            int sides[3];
            cout << "Enter sides (3):";
            for (int i = 0; i < 3; i++) cin >> sides[i];
            int perimeter;
            bool isIsosceles;
            cout << fixed;
            double area;
            triangle(sides[0], sides[1], sides[2], perimeter, area, isIsosceles);
            cout << "Perimeter = " << perimeter << endl <<
            "Area = " << area << endl <<
            "Is isosceles: " << (isIsosceles ? "Yes" : "No") << endl;
            break;
        }
        default: cout << "Incorrect!!!";
    }
    return 0;
}
