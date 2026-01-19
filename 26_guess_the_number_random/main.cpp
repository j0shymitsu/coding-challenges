//
// Created by Josh Birch on 2026-01-17.
//

#include <ctime>
#include <iostream>
#include "../libs/utils.h"

int main() 
{
  std::cout << "---------------------------------"
            << "\n~~~ \033[92mGUESS THE NUMBER!\033[0m ~~~\n"
            << "---------------------------------\n"
            << "\nRULES:\nA random number will be generated between 1-1000, "
            << "and you get 5 guesses to guess it correctly.\n"
            << "If you get it correct, you win, otherwise CPU wins!\n ";

  while (true) 
  {
    int guess_total = 1;

    // Random number generator
    srand((int)time(0));
    int target_number = rand() % 1001;
    
    while (guess_total <= 5)
    {
      std::cout << "\n\nCURRENT GUESS: " << (guess_total);
      int current_guess = ReadInt(
          "\nEnter a guess: ", 1, 1000);

      // Game loop
      if (current_guess == target_number) 
      {
        std::cout << "\n\n\033[92mCORRECT!!\033[0m The number was "
                  << target_number;
        break;
      } 
      else if (current_guess < target_number) 
      {
        std::cout << "\n\n\033[31mINCORRECT. \033[0m "
                  << "The target number is GREATER THAN "
                  << current_guess;
        guess_total++;
      } 
      else if (current_guess > target_number) 
      {
        std::cout << "\n\n\033[31mINCORRECT.\033[0m "
                  << "The target number is LESS THAN "
                  << current_guess;
        guess_total++;
      }
      else 
      {
        std::cout << "Please enter a valid guess. ";
      }
    }

    if (guess_total == 6) 
    {
      std::cout << "\n\nCPU WIN! The number was "
                << target_number
                << ". Silicone dominates, bow to our AI overlords.";
    } 
    else 
    {
      std::cout << "\n\nPLAYER WIN! You got the number correct in "
                << (guess_total)
                << " guess(es). ";
    }

    std::string exit_status;
    std::cout <<"\n\nDo you want to play again? (y/n): ";
    std::cin >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

