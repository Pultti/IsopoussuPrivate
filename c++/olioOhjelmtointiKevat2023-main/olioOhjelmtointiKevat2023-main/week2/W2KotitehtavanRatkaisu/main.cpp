#include <iostream>

using namespace std;

struct returnValue  // Let's use struct to return more than 1 values from a function.
{                   // And we will see that this is like a class but all members are public by default
    int guesses;    // whereas in c++ class all members (data and methods) are private by default.
    int rightValue;
};

int game(int);  // this is just function prototype and "tells" to the compiler
                // that function MUST take integer parameter and it must return
                // integer result.

returnValue GAME(int); // This is prototype for a function that returns 2 values

int main()
{
    cout << "give max number to the game" << endl;
    int maxNumber = 0;
    cin>>maxNumber;
    int numOfQuesses = 0;

    numOfQuesses = game(maxNumber);

    cout << "You quessed right with "<< numOfQuesses << " quesses"<< endl;

    /*
    returnValue foo = GAME(maxNumber);
    cout << "You quessed right with "<< foo.guesses << " quesses";
    cout << "and the right value =  "<< foo.rightValue<< endl;
    */

    return 0;
}

int game(int max)
{
    std::srand(time(0)); // This initializes random generator with current time = each time a different number

    int randomNumber = std::rand()%max + 1;
    int playerQuess = -1;
    int numOfQuesses = 0;

    while(playerQuess!=randomNumber)
    {
        cout << "give your quess between 1 and "<< max<<endl;
        cin>>playerQuess;
        numOfQuesses++;

        if(playerQuess < randomNumber)
        {
            cout << "too small"<< endl;
        }
        else if(playerQuess> randomNumber)
        {
            cout << "too large" << endl;
        }
    }
    cout << "your quess was right" << playerQuess << endl;
    return numOfQuesses;
}

/*
returnValue GAME(int max)
{
    returnValue r;
    r.guesses = max;
    r.rightValue = max*2;

    return r;
}
*/
