#include <algorithm>
#include <iostream>
#include <limits>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
#include "../libs/utils.h"

std::set<std::string> setOfUniqueWords(
  std::string user_input
);

std::unordered_map<std::string, int> wordCounter(
  std::set<std::string> unique_words,
  std::string user_input
  
);

int main()
{
  std::cout << "\n\033[92m=== WORD FREQUENCY COUNT ===\033[0m\n\n";

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
  // Helper lambda function to print key-value pairs
  auto print_key_value = [](const auto& key, const auto& value)
  {
    std::cout << "Word:[" << key << "] Count:[" << value << "]\n";
  };

  std::string test_input = "The cat sat on the mat, and the cat saw another " 
                           "cat. The dog ran, the dog ran fast, and the dog "
                           "ran far, but the cat sat, sat, sat. I like coffee, "
                           "coffee, coffee in the morning, and tea, tea at "
                           "night. This test text is a test: test the text, "
                           "test the words, test the word count. Red red red, "
                           "blue blue, green green-colours repeat, repeat, "
                           "repeat. Email email, message message, call call, "
                           "and reply reply; work work, home home, day day, "
                           "night night.";

  
  std::set<std::string> set_of_words = setOfUniqueWords(test_input);
  std::unordered_map word_frequencies = wordCounter(set_of_words, test_input);

  for (const auto& word : word_frequencies) 
  { 
    print_key_value(word.first, word.second);
  }

  return 0;
}

std::set<std::string> setOfUniqueWords(std::string user_input) 
{
  // Convert string to uppercase
  std::transform(
    user_input.begin(), 
    user_input.end(), 
    user_input.begin(), 
    ::toupper
  );

  std::set<std::string> unique_words;
  std::string current_word;
  std::stringstream iss(user_input);

  while (iss >> current_word) { unique_words.insert(current_word); }

  for (auto iter = unique_words.begin(); iter != unique_words.end(); ) 
  {
    const std::string& word = *iter;

    if (!isalpha(static_cast<char>(word.back()))) 
    {
      iter = unique_words.erase(iter);
    } 
    else 
    {
      iter++;
    }
  }
  
  return unique_words;
}

std::unordered_map<std::string, int> wordCounter(
  std::set<std::string> unique_words,
  std::string user_input
) 
{
  std::unordered_map<std::string, int> word_frequencies;

  for (auto word : unique_words)
  {
      word_frequencies[word] = 0;
  }

  return word_frequencies;
}