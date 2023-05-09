#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;

class Game
{
public:
    Game(int maxNumber);
     ~Game();
    void play();


private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
   void printGameResult();

};

#endif



/*
class Game {
    private:
        int maxNumber;
        int playerGuess;
        int randomNumber;
        int numOfGuesses;


public:
    Game(int max){
    maxNumber = max;
    cout <<"Maximun number to guess from is: " <<maxNumber << endl;
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;
    void play(void);
    }
    ~Game() {
        cout << "Game destructor called" << endl;
    }
    void play(){
        cout<< "Guess a number between 1 and "<< maxNumber << ": ";
        cin >> playerGuess;
        numOfGuesses++;
        while (playerGuess != randomNumber) {
            if (playerGuess > randomNumber) {
                cout << "Too high! Guess again: ";
            } else if (playerGuess < randomNumber){
                cout << "Too low! Guess again: ";
            } else {
                cout << "Number out of range ";
            }
       printGameResult();
    }
    }

   private:
        void printGameResult() {
            cout << "Congratulations, you guessed the number!" << endl;
            cout << "You made " << numOfGuesses << "guesses." << endl;
        }
};

#endif // GAME_H

*/
