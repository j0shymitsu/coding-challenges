//
// Created by josh on 1/2/26.
//

// Convert Celsius to Fahrenheit and back.

#include <iostream>
#include <sstream>
using namespace std;

float fahrToCels(float degrees_f);
float celsToFahr(float degrees_c);

int main()
{
    float fahrenheit, celsius;
    char choice;

    while (true)
    {
        cout << "\nDo you want to convert FROM Celsius or Fahrenheit? (Enter lowercase 'f' or 'c', 'x' to exit): ";
        cin >> choice;

        if (choice == 'f')
        {
            cout << "Enter the temperature in fahrenheit: ";
            cin >> fahrenheit;
            cout << fahrenheit << " degrees Fahrenheit in Celsius: " << fahrToCels(fahrenheit) << endl;
        }
        else if (choice == 'c')
        {
            cout << "Enter the temperature in celsius: ";
            cin >> celsius;
            cout << celsius << " degrees Celsius in Fahrenheit: " << celsToFahr(celsius) << endl;
        }
        else if (choice == 'x')
        {
            break;
        }
        else
        {
            cout << "ERROR: Please enter a valid choice." << endl;
        }
    }

    return 0;
}

float fahrToCels(float degrees_f)
{
    float degrees_c = ((5.0 / 9.0) * (degrees_f - 32));
    return degrees_c;
}

float celsToFahr(float degrees_c)
{
    float degrees_f = ((degrees_c * 1.8) + 32);
    return degrees_f;
}
