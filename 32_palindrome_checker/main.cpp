#include <iostream>
#include <limits>
#include <string>
#include "../libs/utils.h"

bool isPalindrome(std::string input);

int main()
{ 
  std::cout << "--------------------------"
            << "\n~~~ \033[92mPALINDROME CHECKER\033[0m ~~~\n"
            << "--------------------------\n";

  while (true)
  {
    std::string user_input;

    std::cout << "\nEnter a word/sentence to check if it's a palindrome: \n\n";
    std::getline(std::cin, user_input);
    bool is_palindrome = isPalindrome(user_input);
    
    if (is_palindrome)
    {
      std::cout << "Input IS a palindrome!";
    }

    std::string exit_state;
    std::cout << "\n\nDo you want to enter another word/sentence? "
              << "(y/n): ";
    std::cin  >> exit_state;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_state == "n" || exit_state == "N") { break; }
  }

  return 0;
}

bool isPalindrome(std::string input)
{
  for (size_t i = 0; i < input.length(); i++)
  {
    for (size_t j = input.length() - 1; j > 0; j--)
    {
      if (input[i] != input[j]) { return false; }
    }
  }

  return true;
}