#include <iostream>
#include <limits>
#include <string>

void vowelsAndConstonants(std::string input);

int main()
{
  while (true)
  {
    std::string user_input;
    
    std::cout << "Enter a sentence to count its vowels and constonants: \n\n";
    std::getline(std::cin, user_input);
    vowelsAndConstonants(user_input);

    std::string exit_state;
    std::cout << "\n\nDo you want to enter another passage? "
              << "(y/n): ";
    std::cin  >> exit_state;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_state == "n" || exit_state == "N") { break; }
  }

  return 0;;
}

void vowelsAndConstonants(std::string input)
{
  int total_vowels, total_consts;
  
  // Format string
  for (auto& ch : input) { ch = tolower(ch); }

  char vowels[] = {
    'a', 'e', 'i', 'o', 'u'
  };
  char consts[] = {
    'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's',
    't', 'v', 'w', 'x', 'y', 'z'
  };

  for (size_t i = 0; i < input.length(); i++)
  {
    for (size_t v = 0; v < sizeof(vowels); v++)
    {
      if (vowels[v] == input[i]) { total_vowels++; }
    }

    for (size_t c = 0; c < sizeof(consts); c++)
    {
      if (consts[c] == input[i]) { total_consts++; }
    }
  }
  
  std::cout << "There are " << total_vowels << " vowels in the sentence, and "
            << total_consts << " constonants in the sentence. ";
}