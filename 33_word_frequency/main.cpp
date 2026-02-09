#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "../libs/utils.h"

std::unordered_map<std::string, int> wordFrequency(const std::string &input);

int main()
{
  std::cout << "\n\033[92m=== WORD FREQUENCY COUNT ===\033[0m\n";

  while (true)
  {
    std::string user_input;

    std::cout << "\nEnter a sentence/paragraph to return word frequency: \n\n";
    std::getline(std::cin, user_input);

    try 
    {
      auto word_frequencies = wordFrequency(user_input);
      for (size_t i = 0; i < word_frequencies.size(); i++)
      {
        std::cout << 0;
      }
      
    }
  }
}