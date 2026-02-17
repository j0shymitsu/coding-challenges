//
// Created by josh on 1/2/26.
//

// Convert Celsius to Fahrenheit and back.

#include <iostream>
#include <sstream>
using namespace std;

const int degrees_max = 10000;
const int degrees_min = -10000;

float FahrToCels(float degrees_f);

float CelsToFahr(float degrees_c);

int main() {
  float fahrenheit, celsius;

  while (true) {
    string line;

    cout
      << "Do you want to convert FROM Celsius or Fahrenheit? "
      << "(Enter lowercase 'f' or 'c', 'x' to exit): ";

    if (!getline(cin, line)) { break; }

    char choice = line[0];

    if (choice == 'f') {
      cout << "Enter the temperature in fahrenheit: ";
      cin >> fahrenheit;

      if (fahrenheit > degrees_min && fahrenheit < degrees_max) {
        cout << fahrenheit << " degrees Fahrenheit in Celsius: "
             << FahrToCels(fahrenheit) << endl;
      } else {
        cout
          << "Please enter valid input, and check temp within min/max range "
          << "(+/- 10000)";
      }
    } else if (choice == 'c') {
      cout << "Enter the temperature in celsius: ";
      cin >> celsius;

      if (celsius > degrees_min && celsius < degrees_max) {
        cout << celsius << " degrees Celsius in Fahrenheit: "
             << CelsToFahr(celsius) << endl;
      } else {
        cout
          << "Please enter valid input, and check temp within min/max range "
          << "(+/- 10000)";
      }
    } else if (choice == 'x') {
      break;
    }
  }
  return 0;
}

float FahrToCels(float degrees_f) {
  float degrees_c = ((5.0 / 9.0) * (degrees_f - 32));
  return degrees_c;
}

float CelsToFahr(float degrees_c) {
  float degrees_f = ((degrees_c * 1.8) + 32);
  return degrees_f;
}
