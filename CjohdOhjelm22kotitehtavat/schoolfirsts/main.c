#include <stdio.h>


  /*  int main()
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

        for(laskuri=0; laskuri<kerroin; laskuri++)
            printf("%s \n", nimi);


        }  */



     /*   int main()
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


/* int main(){
    // valikko esimerkki

    int valinta=1;
    while (valinta !=3) {
        printf("1. eka\n");
        printf("2. toka\n");
        printf("3. kolmas\n");
        printf("Syota valintasi\n");
        scanf("%d", &valinta);
        if(valinta==1)
            printf("Valitsit eka \n");
        if(valinta==2)
            printf("Valitsit toka \n");
    }


    return 0;
} */



/*  int main()
       {

   int luvut [5];
   int i;

   i=0;
   while (i<5) {
       printf("Give me number! \n");
       scanf("%d", &luvut[i]);
       i++;
   }
   for (i=0;i<5;i++){
       printf("Taulukon alkio %d on %d \n", i, luvut[i]);
   }

     return 0;
    } */


 /*  int main(){

    int myNum=1;
    int sumOfNum=0;

    do {
        printf("Give me number! \n");
        scanf("%d", &myNum);
        sumOfNum+=myNum;
    }
    (myNum > 0)
     printf("yhteenlaskettu summa on %d \n", sumOfNum);

      return 0;
    }    */



 /*  int main()
        {

    int myNum=1;
    int sumOfNum=0;

    while (myNum > 0) {
        printf("Give me number! \n");
        scanf("%d", &myNum);
        sumOfNum+=myNum;
    }
    printf("yhteenlaskettu summa on %d \n", sumOfNum);

      return 0;
     }  */




        /*
 int main()
           {

            char nimi[20];
            char movie[50];
              printf("Ilmoita nimesi \n", nimi);
              scanf("%s", nimi);
              printf("Hello %s \n", nimi);

              printf("What is ur favorite movie? \n");
              fflush(stdin);

                 gets(movie);
              printf("ur favorite movie is %s, really? \n",movie);


              return 0;
              }  */


 /*  int main()
    {
       int ekaLuvut[]={10,20,30};
        int tokaLuvut[3]={2,3,6};
        int tulos[3];

tulos[0]=ekaLuvut[0]+tokaLuvut[0];
tulos[1]=ekaLuvut[1]+tokaLuvut[1];
tulos[2]=ekaLuvut[2]+tokaLuvut[2];

        printf("Tulos taulukon-sisalto on: %d, %d ja %d \n", tulos[0], tulos[1], tulos[2] );


    return 0;

    } */



/* int main() {

  int guess;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-50.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

  while (guess != 17 && tries < 50) {
    printf("Wrong guess, try again: ");
    scanf("%d", &guess);
    tries++;
  }

  if (guess == 17) {
    printf("You got it!\n");
  }
  return 0;
  } */


/* Luo sovellus joka:
• Kysyy käyttäjältä salanumeron
• Jos salanumero on 17, sovellus onnittelee käyttäjää onnistuneesta valinnasta ja
ohjelma päättyy
Jos käyttäjän syöttämä numero ei ole 17, sovellus kysyy numeroa uudestaan. (Käytä whiletai do-while -toistorakennetta) */

/* int main() {

  int i = 3;

  do {
    printf("%d\n", i);
    i++;
  } while (i < 10);
}
 */











/*
int main()
{
    int ekaNumero ;
    int tokaNumero ;

    printf("Merkitse 2 kokonaisnumeroa! \n");
    scanf("%d", &ekaNumero);
    scanf("%d", &tokaNumero);
    printf("Syotetyt luvut olivat %d ja %d ! \n", ekaNumero, tokaNumero);

    int ratk;
    int ratk1;
    int ratk2;
    float ratk3;

    ratk = ekaNumero + tokaNumero;
    ratk1 = ekaNumero - tokaNumero;
    ratk2 = ekaNumero * tokaNumero;
    ratk3 = ekaNumero % tokaNumero;

    printf("Lukujen summa on %d \n", ratk);
    printf("Lukujen erotus on %d \n", ratk1);
    printf("Lukujen tulo on %d \n", ratk2);
    printf("Lukujen osamaara on %.2f \n", ratk3);

    return 0;
}*/


/*
int main()
{
    float kanta ;
    float korkeus ;

    printf("Merkitse kolmion kannan pituus \n");
    scanf("%f", &kanta);
    printf("Merkitse kolmion korkeus! \n");
    scanf("%f", &korkeus);

    double answer=kanta*korkeus;
    answer = answer/2;
    printf("Kun kolmion kanta on %.2f ja korkeus %.2f, on kolmion pinta-ala %.2f m2 \n" , kanta, korkeus, answer);
    return 0;
}*/


/*
int main()
{
    for (int i=1; i<=5; i++) {
        printf("%d: Hello inside loop!\n",i);
    }
    printf("Hello outside loop!\n");
    return 0;
}*/
/*int main()
{
    float kanta = 7;
    float korkeus = 4;
    float pinta = kanta * korkeus / 2;

    printf("Kun kolmion kanta on %f.2 ja korkeus %f.2, on kolmion pinta-ala %f m2 \n" , kanta, korkeus, pinta);
    return 0;
}
 */

/*
   int main()
{
    int lampotila = 20;
    float fahrenheit = 1.8;
    int muutettuna = lampotila * fahrenheit + 32;

    printf("Antamasi lampotila %d on Farenheit asteina %i !\n" ,lampotila ,muutettuna);
    return 0;
} */
