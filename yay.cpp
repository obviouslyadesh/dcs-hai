#include <iostream>
using namespace std;

double area(double base, double height)
{
    return( 0.5 * base * height);
}


    int main() {
    double a, b, c, base, height;
    

    
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle with base " << base << " and height " << height << " is: " << area(base, height) << endl;
    
    return 0;
}