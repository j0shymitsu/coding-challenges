#include <iostream>
#include <limits>
#include <string>

int characterCounter(std::string input);

int main()
{
  while (true)
  { 
    std::string user_input;
    int char_count;

    std::cout << "\nEnter a sentence to count the characters: \n\n";
    std::getline(std::cin, user_input);
    char_count = characterCounter(user_input);
    std::cout << "\nThere are " 
              << char_count 
              << " characters in the provided passage.";

    std::string exit_status;
    std::cout << "\n\nDo you want to count the characters in another passage? "
              << "(y/n): ";
    std::cin  >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }
  

  return 0;
}

int characterCounter(std::string input)
{
  return input.length();
}