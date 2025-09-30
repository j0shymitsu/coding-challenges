#include <iostream>
#include <string>
using namespace std;

string reverse_string(string x);

int main(void)
{
    string test_string = "Hello world";
    string reversed_string = reverse_string(test_string);
    cout << reversed_string;
    return 0;
}

string reverse_string(string x)
{
    string string_reversed = "";

    for (size_t i = x.length(); i > 0; i--)
    {
        string_reversed += x[i-1];
    }
    
    return string_reversed;
}