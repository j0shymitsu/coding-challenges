//
// Created by josh on 1/2/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"
using namespace std;

double interest(double amount, double rate, int years);

int main()
{
    while (true)
    {
        try
        {
            cout << "--- INTEREST CALCULATOR ---" << endl;

            double initial = readDouble("Enter your initial amount: ");
            double rate = readDouble("Enter your interest rate: ");
            int years = readInt("Enter your years supplied: ");

            float total = interest(initial, rate, years);

            if (initial <= 0 || rate <= 0 || years <= 0)
            {
                cout << "All fields must be greater than 0.";
                break;
            }

            cout << "Your total amount after " << years << " years will be " << total << endl;
            break;


        }
        catch (int x)
        {
            return -1;
        }
    }

    return 0;
}

double interest(double amount, double rate, int years)
{
    float factor = 1.0 + rate / 100.0;

    for (int i = 1; i <= years; i++)
    {
        amount *= factor;
    }

    return amount;
}



