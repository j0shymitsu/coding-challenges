//
// Created by josh on 1/5/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"
using namespace std;

int max_of_two_ints(int a, int b);

int main() {
  while (true) {
    string exit_status = "y";

    cout << "\nMAX OF TWO INTEGERS:" << endl;
    int a = readInt("Enter first number: ");
    int b = readInt("Enter second number: ");
    int c = max_of_two_ints(a, b);

    cout << "The largest numbers is: " << c << endl;
    cout << "\nDo you want to compare two more numbers? (y/n): " << endl;
    cin >> exit_status;

    if (exit_status == "n" || exit_status == "N") {
      break;
    }
  }

  return 0;
}

int max_of_two_ints(int a, int b) {
  if (a > b) {
    return a;
  }
  if (a < b) {
    return b;
  }
  if (a == b) {
    cout << "Both numbers are the same! ";
    return a;
  }
}
