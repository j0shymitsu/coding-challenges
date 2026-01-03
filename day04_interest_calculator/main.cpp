//
// Created by josh on 1/2/26.
//

#include <iostream>
#include <limits>
#include <sstream>
using namespace std;

double interest(double amount, double rate, int years);
double read_double(const char* prompt);
int read_int(const char* prompt);


int main()
{
    while (true)
    {
        try
        {
            cout << "--- INTEREST CALCULATOR ---" << endl;

            double initial = read_double("Enter your initial amount: ");
            double rate = read_double("Enter your interest rate: ");
            int years = read_int("Enter your years supplied: ");

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

double read_double(const char* prompt)
{
    double x{};

    while (true)
    {
        cout << prompt;

        if (cin >> x)
        {
            return x;       // ok
        }

        cout << "Invalid number, try again.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int read_int(const char* prompt)
{
    int x{};

    while (true)
    {
        cout << prompt;

        if (cin >> x)
        {
            return x;
        }

        cout << "Must be whole number, try again.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}