#include <iostream>
#include <limits>
#include <string>

void vowelsAndConsonants(std::string input);

int main()
{
  while (true)
  {
    std::string user_input;
    
    std::cout << "Enter a sentence to count its vowels and consonants: \n\n";
    std::getline(std::cin, user_input);
    vowelsAndConsonants(user_input);

    std::string exit_state;
    std::cout << "\n\nDo you want to enter another passage? "
              << "(y/n): ";
    std::cin  >> exit_state;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_state == "n" || exit_state == "N") { break; }
  }

  return 0;
}

void vowelsAndConsonants(std::string input)
{
  int total_vowels = 0;
  int total_cons = 0;

  constexpr char cons[] = "bcdfghjklmnpqrstvwxyz";
  constexpr char vowels[] = "aeiou";

  // Format string
  for (auto& ch : input) { ch = tolower(ch); }

  for (size_t i = 0; i < input.length(); i++)
  {
    for (char c : cons)
    {
      if (c == input[i]) { total_cons++; }
    }

    for (char c : vowels)
    {
      if (c == input[i]) { total_vowels++; }
    }
  }
  
  std::cout << "There are " << total_vowels << " vowels in the sentence, and "
            << total_cons << " consonants in the sentence. ";
}