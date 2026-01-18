//
// Created by Josh Birch on 2026-01-17.
//

#include <iostream>
#include "../libs/utils.h"

int main() {
  std::cout << "---------------------------------"
            << "\n~~~ \033[92mGUESS THE NUMBER! (LOCAL)\033[0m ~~~\n"
            << "---------------------------------\n"
            << "\nRULES:\nPlayer 1 sets a number between 1-1000, "
            << "and player 2 gets 5 guesses to guess it.\n"
            << "If they get it correct, they win, otherwise player 1 wins!\n ";

  while (true) {
    int guess_total = 1;
    int target_number = ReadInt(
        "\nPLAYER 1 - Enter a number between 1-1000: ", 1, 1000
        );
    while (guess_total <= 5)
    {
      std::cout << "\n\nCURRENT GUESS: "
                << (guess_total);
      int current_guess = ReadInt(
          "\nPLAYER 2 - Enter a guess: ", 1, 1000);

      // Game loop
      if (current_guess == target_number) {
        std::cout << "\n\n\033[92mCORRECT!!\033[0m The number was "
                  << target_number;
        break;
      } else if (current_guess < target_number) {
        std::cout << "\n\n\033[31mINCORRECT.\033[0m The target number is GREATER THAN "
                  << current_guess;
        guess_total++;
      } else if (current_guess > target_number) {
        std::cout << "\n\n\033[31mINCORRECT.\033[0m The target number is LESS THAN "
                  << current_guess;
        guess_total++;
      }
      else {
        std::cout << "Please enter a valid guess. ";
      }
    }

    if (guess_total == 6) {
      std::cout << "\n\nPLAYER 1 WIN! The number was "
                << target_number;
    } else {
      std::cout << "\n\nPLAYER 2 WIN! They got the number correct in "
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

