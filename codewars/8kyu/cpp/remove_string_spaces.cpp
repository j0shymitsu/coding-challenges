#include <iostream>
#include <string>
using namespace std;

string no_space(string x);

int main(void)
{
    string test = "Hello world";
    string new_string = no_space(new_string);
    cout << new_string;

    return 0;
}

string no_space(string x)
{
    string new_string = "";

    while (x.size() > 0)
    {
        for (size_t i = 0; i < x.size(); i++)
        {
            new_string += x[i];
        }
    }
    return new_string;
}