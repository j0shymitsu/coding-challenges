//
// Created by josh on 1/7/26.
//

#include <iostream>
#include <sstream>
#include "../libs/utils.h"

std::string grade_classifier(double mark);

int main() {
  while (true) {
    std::string exit_status = "y";

    std::cout << "\n--- GRADE CHECKER ---\n";

    double grade = readDouble("Enter your mark out of 100: ");

    if (grade > 100 || grade < 0) {
      std::cout << "Please enter a valid mark (0-100)";
    } else {
      std::cout << "A mark of " << grade << " earns you a "
                << grade_classifier(grade);
    }

    std::cout << "\nWould you like to grade another mark? (y/n): ";
    std::cin >> exit_status;

    if (exit_status == "n" || exit_status == "N") {
      break;
    }
  }

  return 0;
}

std::string grade_classifier(double mark) {
  if (mark <= 39) {
    return "FAIL";
  } else if (mark <= 49) {
    return "THIRD CLASS";
  } else if (mark <= 59) {
    return "LOWER SECOND CLASS (2:2)";
  } else if (mark <= 69) {
    return "UPPER SECOND CLASS (2:1)";
  } else if (mark >= 70 && mark < 100) {
    return "FIRST CLASS";
  }

  return "PLEASE ENTER A VALID MARK";
}
