#include <bits/stdc++.h>
#include <iostream>
#include <limits>
#include <string>
#include <sstream>

int main()
{
  while (true)
  {
    std::string sentence;

    std::cout << "\n\nSay something and I'll echo you! "
              << "(or shout EXIT and I'll close): ";
    std::getline(std::cin, sentence);

    if (sentence == "EXIT") { break; }

    std::cout << "\n" << sentence;
  }

  std::cout << "\nGoodbye!\n\n";

  return 0;
}