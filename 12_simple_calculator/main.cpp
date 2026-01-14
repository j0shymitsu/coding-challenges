//
// Created by josh on 1/7/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"

double simple_calculator(double x, double y, char operation);

int main() {
  while (true) {
    std::string exit_status = "y";

    double a = ReadDouble("Enter number x: ");
    double b = ReadDouble("Enter number y: ");
    char operation;

    std::cout << "Which operation? (+ - * /): ";
    std::cin >> operation;

    std::cout << simple_calculator(a, b, operation);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "\nWould you like to perform another operation? (y/n): ";
    std::cin >> exit_status;

    if (exit_status == "n" || exit_status == "N") {
      break;
    }
  }

  return 0;
}

double simple_calculator(double a, double b, char operation) {
  switch (operation) {
    case '+':return a + b;
    case '-':return a - b;
    case '*':return a * b;
    case '/':return a / b;
    default:
      std::cout
          << "ERROR. Please enter a valid operation (+ - * /). EXIT STATUS: ";
      return -1;
  }
}
