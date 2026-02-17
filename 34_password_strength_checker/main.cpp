#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "../libs/utils.h"

bool containsUpper(const std::string& s);
bool containsLower(const std::string& s);
bool containsDigit(const std::string& s);
bool containsSymbol(const std::string& s);
bool containsCommonPattern(std::string s);
int scorePassword(const std::string& password);

int main()
{
  std::cout << "\n---------------------------------"
            << "\n~~~ \033[92mPASSWORD STRENGTH CHECKER\033[0m ~~~\n"
            << "---------------------------------\n";

  while (true)
  {
    std::string password_to_check;
    int password_score;

    std::cout << "\nEnter a password to check it's strength: \n\n";
    std::getline(std::cin, password_to_check);
    password_score = scorePassword(password_to_check);
    std::cout << "\nYour password strength is "
              << password_score
              << " out of 100.";

    std::string exit_status;
    std::cout << "\n\nDo you want to score another? "
              << "(y/n): ";
    std::cin  >> exit_status;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (exit_status == "n" || exit_status == "N") { break; }
  }

  return 0;
}

bool containsUpper(const std::string& s)
{
  for (char c : s)
  {
    if (isupper(static_cast<unsigned char>(c))) { return true; }
  }

  return false;
}

bool containsLower(const std::string& s)
{
  for (char c : s)
  {
    if (islower(static_cast<unsigned char>(c))) { return true; }
  }

  return false;
}

bool containsDigit(const std::string& s)
{
  for (char c : s)
  {
    if (isdigit(static_cast<unsigned char>(c))) { return true; }
  }

  return false;
}

bool containsSymbol(const std::string& s)
{
  for (char c : s)
  {
    if (isalpha(static_cast<unsigned char>(c))) { return true; }
  }

  return false;
}

bool containsCommonPattern(std::string s)    // Crude example
{
  std::vector<std::string> common_passwords = 
  {
    "password",
    "12345678",
    "123456789",
    "111111111",
    "baseball",
    "football",
    "qwertyuiop",
    "superman",
    "1qaz2wsx",
    "77777777",
    "jennifer",
    "trustno1"
  };

  // Convert to lower 
  std::transform(
    s.begin(),
    s.end(),
    s.begin(),
    ::tolower
  );

  for (const auto word : common_passwords)
  {
    if (s.find(word) != std::string::npos) return true;
  }
  
  return false;
}

int scorePassword(const std::string& password)
{
  int score;

  if (password.length() < 8) { return 0; }
  if (password.length() >= 8) { score += 20; }
  if (password.length() >= 12) { score += 20; }
  if (password.length() >= 16) { score += 10; }

  if (containsLower(password)) { score += 10; }
  if (containsUpper(password)) { score += 10; }
  if (containsDigit(password)) { score += 10; }
  if (containsSymbol(password)) { score += 10; }

  if (containsCommonPattern(password)) { return 0; }

  return score;
}