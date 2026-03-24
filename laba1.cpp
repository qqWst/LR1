#include <iostream>
#include "triangle.cpp"
#include "rectangle.cpp"

using namespace std;

int main(){

    int choice;
    cout << "1. Rectangle\n2. Triangle\nEnter your choice: ";
    cin >> choice;
    switch(choice){
       case 1:{
            double a, b;
            cout << "Enter length: ";
            cin >> a;
            cout << "Enter width: ";
            cin >> b;
            calRectangle(a, b);
            break;
        }
        case 2:{ 
            double side1, side2, side3;
            cout << "Enter 1st side: ";
            cin >> side1;
	    cout << "Enter 2nd side: ";
	    cin >> side2;
	    cout << "Enter 3rd side: ";
	    cin >> side3;
            triangle(side1, side2, side3);
            break;
        }
        default: cout << "Incorrect!!!";
    }
    return 0;
}
