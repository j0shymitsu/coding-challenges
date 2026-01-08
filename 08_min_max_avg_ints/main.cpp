//
// Created by josh on 1/5/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"
using namespace std;

int min_number(int a, int b, int c);
int max_number(int a, int b, int c);
double avg_number(int a, int b, int c);

int main()
{
    while (true)
    {
        string exit_status = "y";

        cout << "\nMIN, MAX, AND AVERAGE OF NUMBERS:" << endl;

        int a = read_int("Enter integer a: ");
        int b = read_int("Enter integer b: ");
        int c = read_int("Enter integer c: ");

        cout << "\nThe smallest number of the group is: " << min_number(a, b, c) << endl;
        cout << "\nThe maximum number of the group is: " << max_number(a, b, c) << endl;
        cout << "\nThe average of the group is: " << avg_number(a, b, c) << endl;

        cout << "\nDo you want to compare more numbers? (y/n): " << endl;
        cin >> exit_status;

        if (exit_status == "n" || exit_status == "N")
        {
            break;
        }
    }
    return 0;
}

int min_number (int a, int b, int c)
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

int max_number(int a, int b, int c)
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

double avg_number(int a, int b, int c)
{
    return static_cast<double>(a + b + c) / 3;
}

