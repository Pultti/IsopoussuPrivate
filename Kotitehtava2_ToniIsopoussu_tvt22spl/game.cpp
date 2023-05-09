#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int M)
{
    maxNumber=M;
cout<<"Maximun number to guess from is: "<< maxNumber <<endl;
//cin >> maxNumber;
}

Game::~Game()
{
   cout<<"Game desctructor cleared stack"<<endl;
}

void Game::play()
{
    srand(time(0));
    randomNumber = rand() % maxNumber+1;
    numOfGuesses = 0;
    cout << "Guess a number between 1 and " << maxNumber << ": \n";
    cin >> playerGuess;
    numOfGuesses++;
    while (playerGuess !=randomNumber) {
        if (playerGuess > randomNumber) {
            cout << "Too high! Guess again: \n";
        } else {
            cout << "Too low! Guess again: \n";
        }
        cin >> playerGuess;
        numOfGuesses++;
    }
    printGameResult();
}


void Game::printGameResult()
{
     cout <<  "Congratulations, you guessed the number!" << endl;
     cout << "You made "<< numOfGuesses << " guesses." << endl;
}

/*
 *
void game::play()
{
 cout<<"Guess a number between 0- "<< <<": "<<endl;
 if(x < gameObject){
     cout<<"Guess too low"<<endl;
     }
 if(x > gameObject){
     cout<<"Guess too high"<<endl;
 }
 if(x = gameObject){
     cout<<"Correct answer!"<<endl;
 }
}

void game::printGameResult()
{
    cout<<"Correct answer"<<endl;
}

*/
