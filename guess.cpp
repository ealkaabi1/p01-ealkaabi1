// Eisa Alkaabi
// CSCI 111
// Project 01
// 9/24/2017

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
  srand ( time(NULL) );
  int randomNumber = rand() % 10 + 1;
  int guess;

  cout << "Guess the computer's number: ";
  cin >> guess;

  if (guess == randomNumber)
    cout << "You, guessed correctly! You win!" << endl;
  else if (guess > randomNumber)
    cout << "You were off by " << guess - randomNumber 
      << ". Sorry, you lose." << endl;
  else
    cout << "You were off by " << randomNumber - guess 
      << ". Sorry, you lose." << endl;

  return 0;
}
