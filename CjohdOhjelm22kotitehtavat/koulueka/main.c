#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Give temperature as celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.lf Temperature you gave is %.lf in fahrenheit\n", celsius, fahrenheit);
    return 0;
}
