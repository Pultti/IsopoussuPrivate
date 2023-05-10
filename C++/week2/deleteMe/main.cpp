#include <iostream>

using namespace std;
#include <time.h>

int main()
{
    //cout << "time(0)" <<time(0)<< endl;  // just to verify that time(0) gives different value each time.
    std::srand(4);
    std::srand(time(0)); // This initializes random generator with current time = each time a different number
    int maxNumber = 10;
    int randomNumber = std::rand()%maxNumber + 1;
    int playerQuess = -1;
    int numOfQuesses = 0;

    while(playerQuess!=randomNumber)
    {
        cout << "give your quess between 1 and "<< maxNumber<<endl;
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

    cout << "right answer = " << playerQuess << " with " << numOfQuesses<< " quesess"<<endl;
    return 0;
}
