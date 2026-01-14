//
// Created by josh on 1/4/26.
//

#include <cmath>
#include <iostream>
#include <sstream>
#include "../libs/utils.h"
using namespace std;

double ReturnArea(double radius);

double ReturnCircumference(double radius);

const double PI = 3.141592653589;

int main() {
  while (true) {
    try {
      cout << endl << "--- CIRCLE CALCULATOR ---\n" << endl;

      double radius = ReadDouble("Enter your radius (not a euphemism): ");
      double area = ReturnArea(radius);
      double circumference = ReturnCircumference(radius);

      if (radius < 0) {
        cout << "Radius must be greater than zero!!!!!!";
        break;
      }

      cout << "\nGiven a circle with radius " << radius << ":" << endl;
      cout << "Area is: " << area << endl;
      cout << "Circumference is: " << circumference << endl;
    } catch (int x) {
      cout << "Error.";
      return -1;
    }
  }

  return 0;
}

double ReturnArea(double radius) {
  return pow(radius, 2.0) * PI;
}

double ReturnCircumference(double radius) {
  return 2 * (radius * PI);
}
