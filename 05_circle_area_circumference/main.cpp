//
// Created by josh on 1/4/26.
//

#include <cmath>
#include <iostream>
#include <sstream>
#include "../libs/utils.h"
using namespace std;

double return_area(double radius);
double return_circumference(double radius);

const double PI = 3.141592653589;

int main()
{
    while (true)
    {
        try
        {
            cout << endl << "--- CIRCLE CALCULATOR ---\n" << endl;

            double radius = read_double("Enter your radius (not a euphemism): ");
            double area = return_area(radius);
            double circumference = return_circumference(radius);

            if (radius < 0)
            {
                cout << "Radius must be greater than zero!!!!!!";
                break;
            }

            cout << "\nGiven a circle with radius " << radius << ":" << endl;
            cout << "Area is: " << area << endl;
            cout << "Circumference is: " << circumference << endl;
        }
        catch (int x)
        {
            cout << "Error.";
            return -1;
        }
    }

    return 0;
}

double return_area(double radius)
{
    return pow(radius, 2.0) * PI;
}

double return_circumference(double radius)
{
    return 2 * (radius * PI);
}