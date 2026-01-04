//
// Created by josh on 1/4/26.
//

#include <cmath>
#include <iostream>
#include <sstream>
#include "../libs/utils.h"
using namespace std;

double bmiCalculator(double weight, double height);

int main()
{
    while (true)
    {
        try
        {
            cout << "\nBMI CALCULATOR" << endl;

            double weight_kg = readDouble("Enter your weight in kilograms (to 2dp): ");
            double height_m = readDouble("Enter your height in metres (to 2dp): ");
            double bmi = bmiCalculator(weight_kg, height_m);

            if (weight_kg <= 0 || height_m <= 0)
            {
                cout << "Height or weight cannot be zero!";
                break;
            }

            cout << "Your BMI is: " << bmi << endl;
        }
        catch (int x)
        {
            cout << "An error occurred.";
            return -1;
        }
    }

    return 0;
}

double bmiCalculator(double weight, double height)
{
    double bmi = weight / ::pow(height, 2);

    if (bmi <= 18.5)
    {
        cout << "You are UNDERWEIGHT\n";
        return bmi;
    }
    else if (bmi > 18.5 && bmi <= 24.9)
    {
        cout << "Your are NORMAL WEIGHT\n";
        return bmi;
    }
    else
    {
        cout << "You are OVERWEIGHT\n";
        return bmi;
    }
}