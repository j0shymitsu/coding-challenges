#include <iostream>
#include "../libs/utils.h"

double centimetreConverter(int distance, int direction);
double metreConverter(int distance, int direction);
double kilometreConverter(int distance, int direction);

int main() {
    std::cout << "\n-------------------------------"
              << "\n~~~ \033[92mDISTANCE UNIT CONVERTER\033[0m ~~~\n"
              << "-------------------------------\n";
    while (true)
    {
      // Menu
      std::cout << "\nDo you want to convert from metric (1)," 
                << "or from imperial (2)? (Enter 4 to exit)\n";

      int conversion_direction = 0;

      while (true) 
      {
        conversion_direction = readInt("(Enter 1, 2 or 4): ");
        if (conversion_direction == 1) { break; } 
        if (conversion_direction == 2) { break; }
        if (conversion_direction == 4) { break; }
        std::cout << "Please choose either 1 (from metric)" 
                  << "or 2 (from imperial).\n";
      }

      if (conversion_direction == 4) { break; }

      std::cout << "\n1: Centimeters and inches\n"
                << "2: Meters and feet\n"
                << "3: Kilometers and miles\n"
                << "4: Exit\n\n";
      int choice = readInt("Enter the number corresponding to your choice: ");

      if (choice == 4) { break; }

      if (conversion_direction == 1)
      {
        double result = 0.0;

        switch (choice) 
        {
          case 1:
          {
            int cm = readInt("Enter centimetres: "); 
            result = centimetreConverter(cm, conversion_direction);
            std::cout << cm << " cm = " << result << " inches\n";
            break;
          }
          case 2:
          {
            int m = readInt("Enter metres: ");
            result = metreConverter(m, conversion_direction);
            std::cout << m << " m = " << result << " feet\n";
            break;
          }
          case 3:
          {
            int km = readInt("Enter kilometres: ");
            result = kilometreConverter(km, conversion_direction);
            std::cout << km << " km = " << result << " miles\n"; 
            break;
          }
          default:
          {
            std::cout << "Error. Please try again.";
            continue;
          }
        }
      }

      if (conversion_direction == 2)
      {
        double result = 0.0;

        switch (choice)
        {
          case 1:
          {
            int inches = readInt("Enter inches: ");
            result = centimetreConverter(inches, conversion_direction);
            std::cout << inches << " inches = " << result << " cm\n";
            break;
          }
          case 2:
          {
            int feet = readInt("Enter feet: ");
            result = metreConverter(feet, conversion_direction);
            std::cout << feet << " feet = " << result << " m\n";
            break;
          }
          case 3:
          {
            int miles = readInt("Enter miles: ");
            result = kilometreConverter(miles, conversion_direction);
            std::cout << miles << " miles = " << result << " km\n";
            break;
          }
          default:
          {
            std::cout << "Error. Please try again.";
            continue;
          }
        }
      }

      std::string exit_status;
      std::cout << "\nDo you want to convert more? (y/n): ";
      std::cin >> exit_status;
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      if (exit_status == "n" || exit_status == "N") { break; }

    }
    
    return 0;
}

double centimetreConverter(int distance, int direction)
{
  if (direction == 1) { return distance * 0.3937; }
  if (direction == 2) { return distance * 2.54; }
  std::cout << "Error";
  return 0;
}

double metreConverter(int distance, int direction)
{
  if (direction == 1) { return distance * 3.281; }
  if (direction == 2) { return distance * 0.3048; }
  std::cout << "Error";
  return 0;
}

double kilometreConverter(int distance, int direction)
{
  if (direction == 1) { return distance * 0.6214; }
  if (direction == 2) { return distance * 1.609; }
  std::cout << "Error";
  return 0;
}