#include <iostream>
#include <string>
using namespace std;

string no_space(string x);

int main(void)
{
    string test = "Hello      world     hello  hello";
    string new_string = no_space(test);
    cout << new_string;

    return 0;
}

string no_space(string x)
{ 
    string new_string = "";
    new_string += x.at(0);

    for (size_t i = 1; i < x.length(); i++)
    {
        char last_char = x.at(i-1);
        char current_char = x.at(i);

        if (last_char == ' ' && current_char == ' ')
        {
            continue;
        }
        else
        {
            new_string += current_char;
        }
    }

    return new_string;
}