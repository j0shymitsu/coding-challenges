#include <iostream>
using namespace std;

int opposite(int n);

int main()
{
    int number = 5;
    int reverse = opposite(number);
    cout << reverse;
}

int opposite(int number) 
{
  return number - (number * 2);
}