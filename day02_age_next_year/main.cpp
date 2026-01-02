//
// Created by josh on 1/2/26.
//

// Ask for name and age, print age next year.

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    string name;
    string age_text;
    stringstream stream;

    int age = 0;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Welcome " << name << "!" << endl;

    cout << "Please enter your age: ";
    cin >> age_text;

    stream << age_text;
    stream >> age;

    age += 1;

    cout << "Next year you will be " << age << "!" << endl;

    return 0;
}