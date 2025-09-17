#include <iostream>
using namespace std;

int basicOp(char op, int val1, int val2);

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}

int basicOp(char op, int val1, int val2)
{
    switch (op)
    {
    case '+':
        return val1 + val2;
    case '-':
        return val1 - val2;
    case '*':
        return val1 * val2;
    case '/':
        return val1 / val2;
    default:
        break;
    }
}
