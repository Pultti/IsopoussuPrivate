#include <stdio.h>

    int main()
         {

     int luvut [5];
     int i=0;

     i=0;
     while (i<5) {
         printf("Give me number! \n");
         scanf("%d", &luvut[i]);
         i++;
     }
     for (i=0; i<5; i++){
         printf("Taulukon alkio %d on %d \n", i, luvut[i]);
     }

       return 0;
      }

