#include <iostream>
#include "../libs/utils.h"

double centimeterConverter(int a, int b, int choice);
double metersConverter(int a, int b, int choice);
double kilometersConverter(int a, int b, int choice);

int main() {
    std::cout << "\n-------------------------------"
              << "\n~~~ \033[92mDISTANCE UNIT CONVERTER\033[0m ~~~\n"
              << "-------------------------------\n";
    // Menu
    std::cout << "Do you want to convert from metric (1)," 
              << "or from imperial (2)?\n";
    int choice = 0;
    while (true) {
      int choice = readInt("(Enter 1 or 2): ");
      if (choice == 1) {
        break;
      } else if (choice == 2) {
        break;
      }
      std::cout << "Please choose either 1 (from metric)" 
                << "or 2 (from imperial).\n";
    }

    std::cout << "REACHED";


    std::cout << "1: Centimeters and inches\n"
              << "2: Meters and feet\n"
              << "3: Kilometers and miles\n"
              << "4: Exit\n\n";


    // switch (choice) {
    //   case 1:
    //         readInt("Enter 1 to convert to cm, or 2 to convert to in: ");
    //         readInt("") 
    //         centimeterConverter() break;
    // }
    return 0;
}