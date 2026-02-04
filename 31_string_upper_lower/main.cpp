//
// Created by Josh Birch on 2026-01-28.
//

#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include "../libs/utils.h"

std::string convertString(std::string input, int upper_lower);

int main()
{
  std::cout << "\n-----------------------------"
            << "\n~~~ \033[92mCONVERT SENTENCE CASE\033[0m ~~~\n"
            << "-----------------------------\n";
  while (true)
  {
    int conversion_direction = 0;
    std::string user_input;

    // Menu
    std::cout << "\nDo you want to convert to uppercase (1),"
              << " or lowercase (2)? (Enter 4 to exit)\n";
    
    while (true)
    {
      conversion_direction = readInt("\n(Enter 1, 2 or 4): ");
      if (conversion_direction == 1) { break; }
      if (conversion_direction == 2) { break; }
      if (conversion_direction == 4) { break; }
      std::cout << "Please choose either 1 (to uppercase)" 
                << " or 2 (to lowercase).\n"; 
    }

    if (conversion_direction == 4) { break; }

    std::cout << "\nEnter your sentence: \n\n";
    std::getline(std::cin, user_input);
    std::string new_string = convertString(user_input, conversion_direction);
    std::cout << new_string;

    std::string exit_state;
    std::cout << "\n\nDo you want to enter another passage? "
              << "(y/n): ";
    std::cin  >> exit_state;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    if (exit_state == "n" || exit_state == "N") { break; }
  }

  return 0;
}

std::string convertString(std::string input, int upper_lower)
{
  if (upper_lower == 1) 
  { 
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
  }

  if (upper_lower == 2)
  {
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
  }

  return "Error.";
}