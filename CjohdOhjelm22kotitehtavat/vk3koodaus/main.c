#include <stdio.h>

  /*  int main(){



     return 0;
     }  */


 /* int main(){

    int valinta;
    valinta =10;

    while(valinta!=9)
    {
        printf("1. Nelion kehan pituus \n");
        printf("2. Ympyran kehan pituus \n");
        printf("9. Lopetus \n");
        printf("Valitse toiminta \n \n");
        scanf("%d", &valinta);
        if(valinta==1) printf("Valittu nelion kehan pituus; \n \n");
        if(valinta==2) printf("Valittu ympyran kehan pituus; \n \n");
    }

    return 0;
    }  */


 /*  int main(){

    int i, luku, summa=0;


    printf("Anna kokonaisluku! \n");

    scanf("%d", &luku);

    i=0;
    while(i<=luku) {
        if((i%2)==0){
            printf("Parillinen luku %d \n", i);
            summa=summa+i;
        }
        i++;
    }
    printf("Parillisten lukujen summa on on %d \n", summa);

    return 0;
    }   */



/*   int main(){

    int luku;
    int kerroin;
    int tulos;

    printf("Anna kokonaisluku! Tietokone kertoo antamasi luvun 10 kertotaululla\n");
        scanf("%d", &luku);
        kerroin=1;

        while(kerroin<=10) {
            tulos=luku*kerroin;
            printf("%d*%d=%d \n", luku, kerroin, tulos);
            kerroin++;
        }

    return 0;
    }  */


 /* int main() {

int guess;
int tries = 0;

printf("Im thinking of a number in the range 1-50.\n");
printf("Try to guess it: \n");
scanf("%d", &guess);

while (guess != 17 && tries < 5) {
     printf("Wrong guess, try again: \n");
     scanf("%d", &guess);
     tries++;
     }

     if (guess == 17) {
     printf("You got it!\n");
     }

     return printf("Onnistiko vai ei? \n");
     } */


 /* int main()
 {

   char nimi[40];
   int kerroin;
   int laskuri;

   printf("ilmoita nimesi \n");

   scanf("%s",nimi);

   fflush(stdin);

   printf("Montako kertaa haluat nimesi tulostettavan \n");

   scanf("%d", &kerroin);
   laskuri=0;

   while(laskuri<kerroin) {
       printf("%s \n", nimi);
       laskuri++;
 }

   printf("sama for toiminnolla \n");

   for(laskuri=0; laskuri<kerroin; laskuri++) {
       printf("%s \n", nimi);
   }

   printf("Sama do while loopilla");

   do ()



 return 0;

 } */



/*  int main()
        {
     int myNum ;

     printf("Give me a number \n");

     while (myNum<5){
         printf("100 \n", myNum);
         myNum++;
     }
     printf("\n");
     return 0;
       } */



/*  int main(){


   char ch;
   printf("Anna merkki \n");
   scanf("%c", &ch);
   printf("syötit merkin %c \n", ch);
   if(ch=='K') printf("Merkki oli iso K \n");

   return 0;
}   */
