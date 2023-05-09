#include <stdio.h>

int main()
{
    int tableOfNumbers[2][3]={
        {1,2,3},
        {4,5,6},
        {100,200,300}
    };
    printf("Taulukon 1. rivin luku %d\n",tableOfNumbers[0][2]);
    printf("Taulukon 2. rivin luku %d\n",tableOfNumbers[1][1]);
    printf("Taulukon 3. rivin luku %d\n",tableOfNumbers[2][0]);
    return 0;
}
