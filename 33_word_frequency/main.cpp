#include <iostream>
#include <limits>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include "../libs/utils.h"

std::set<std::string> setOfUniqueWords(std::string user_input);
int wordCounter(std::string user_input);

int main()
{
  std::cout << "\n\033[92m=== WORD FREQUENCY COUNT ===\033[0m\n";

  // while (true) 
  // {
    // std::string user_input;

    // std::cout << "\nEnter a sentence/paragraph to return word frequency: \n\n";
    // std::getline(std::cin, user_input);

    // try 
    // {
    //   auto unique_words = setOfUniqueWords(user_input);
      
    //   for (size_t i = 0; i < unique_words.size(); i++)
    //   {
    //     std::cout << wordCounter(*next(unique_words.begin(), i));
    //   }
    // } 
    // catch (const std::exception& e) 
    // {
    //   std::cout << e.what() << "\n";
    // }

    // std::string exit_status;
    // std::cout << "\nDo you want to input another? (y/n)";
    // std::cin >> exit_status;
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // if (exit_status == "n" || exit_status == "N") { break; }
  // }

  // DEBUG
  std::string test_input = "The cat sat on the mat, and the cat saw another " 
                           "cat. The dog ran, the dog ran fast, and the dog "
                           "ran far, but the cat sat, sat, sat. I like coffee, "
                           "coffee, coffee in the morning, and tea, tea at "
                           "night. This test text is a test: test the text, "
                           "test the words, test the word count. Red red red, "
                           "blue blue, green green—colors repeat, repeat, "
                           "repeat. Email email, message message, call call, "
                           "and reply reply; work work, home home, day day, "
                           "night night.";

  auto result = setOfUniqueWords(test_input);                           
  return 0;
}

std::set<std::string> setOfUniqueWords(std::string user_input)
{
  std::set<std::string> unique_words;
  std::string current_word;
  std::stringstream iss(user_input);

  while (iss >> current_word) { unique_words.insert(current_word); }

  for (std::string const& word : unique_words) 
  { std::cout << word << std::endl; }
  
  return unique_words;
}