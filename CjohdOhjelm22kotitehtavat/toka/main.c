#include <stdio.h>
/*
  alla oleva ohjelma esittelee printf() ja scanf() toimintaa
 */

int main()
{
    int age; //Tämä on ikä-muutuja
    float luku; //luku muuttuja. kommenteis vois olla Ä
    printf("How old are you?\n");
    scanf("%d",&age);
    printf("You said that you are %d years old\n", age);
    printf("Anna desimaaliluku?");
    scanf("&luku");
    return 0;
}
