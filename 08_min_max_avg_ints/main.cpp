//
// Created by josh on 1/5/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"
using namespace std;

int minNumber(int a, int b, int c);
int maxNumber(int a, int b, int c);
double avgNumber(int a, int b, int c);

int main()
{
    while (true)
    {
        string exit_status = "y";

        cout << "\nMIN, MAX, AND AVERAGE OF NUMBERS:" << endl;

        int a = readInt("Enter integer a: ");
        int b = readInt("Enter integer b: ");
        int c = readInt("Enter integer c: ");

        cout << "\nThe smallest number of the group is: " << minNumber(a, b, c) << endl;
        cout << "\nThe maximum number of the group is: " << maxNumber(a, b, c) << endl;
        cout << "\nThe average of the group is: " << avgNumber(a, b, c) << endl;

        cout << "\nDo you want to compare more numbers? (y/n): " << endl;
        cin >> exit_status;

        if (exit_status == "n" || exit_status == "N")
        {
            break;
        }
    }
    return 0;
}

int minNumber (int a, int b, int c)
{
    int min = 0;

    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else if (c <= a && c <= b)
    {
        min = c;
    }

    return min;
}

int maxNumber(int a, int b, int c)
{
    int max = 0;

    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else if (c >= a && c >= b)
    {
        max = c;
    }

    return max;
}

double avgNumber(int a, int b, int c)
{
    return static_cast<double>(a + b + c) / 3;
}

