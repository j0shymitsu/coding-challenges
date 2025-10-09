#include <iostream>
#include <string>
using namespace std;

string rps(const string& p1, const string& p2);

int main() 
{
    return 0;   
}

string rps(const string& p1, const string& p2) 
{
    if (p1 == p2) 
    { 
        return "Draw!"; 
    }
    else 
    {
        if (p1 == "rock") 
        {
            if (p2 == "paper") { return "Player 2 won!"; }
            return "Player 1 won!";
        }
        if (p1 == "paper") 
        {
            if (p2 == "scissors") { return "Player 2 won!"; } 
            return "Player 1 won!";
        }
        if (p1 == "scissors")
        {
            if (p2 == "rock") { return "Player 2 won!"; }
            return "Player 1 won!";
        }
    }
}