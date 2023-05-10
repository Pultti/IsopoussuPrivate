#include <stdio.h>

                                            //VERTAILUTEHTÄVÄ!!

/* void vertaile(int luku1, int luku2);

int main()
{
    printf("Anna kaksi kokonaislukua! \n");
    int luku1, luku2;
    luku1=0;
    luku2=0;
    scanf("%d" "%d", &luku1, &luku2);
    vertaile(luku1, luku2);
    return 0;

}

void vertaile(int luku1, int luku2){
    if(luku1>=luku2) printf("Luvut suuremmasta pienempaan %d, %d \n", luku1, luku2);
     else printf("Luvut suuremmasta pienempaan %d, %d \n", luku2, luku1);
}  */


/* void tulosta(char mjono[]);

int main()
{

    char nimi[30];
    printf("Anna nimesi \n");
    scanf("%s", nimi);
    tulosta(nimi);

    return 0;
}

void tulosta(char mjono[]){
    printf("Nimesi on %s \n", mjono);
} */


                              //JOKU ERIKOINEN MERKKIJONON YHTEENLASKU))

  /* #include <stdlib.h>


     int main(){

        char intMjono[30];
        char doubleMjono[30];
        int kLuku;
        double dLuku, summa;
        printf("Anna kokonaisluku \n");
        scanf("%s", intMjono);
        printf("Anna desimaaliluku \n");
        scanf("%s", doubleMjono);

        kLuku=atoi(intMjono);
        dLuku=atof(doubleMjono);
        summa=kLuku+dLuku;
        printf("Lukujen summa on %lf \n", summa);

    return 0;
    } */



/* float tulos();

int main()
{
    float luettuLuku;
    luettuLuku=tulos();
    printf("Tulos on %.2f \n", luettuLuku);

    return 0;
}

float tulos() {
    float luku;
    printf("Anna luku \n");
    scanf("%f", &luku);
    luku*=3;
    return luku;
} */

/*
   int main(){

       float eka, toka, tulos;

       eka=10.55;
       toka=20.35;
       tulos=summaa(eka, toka);
       tulosta(tulos);

       toka=100;
       tulos=summaa(eka, toka);
       tulosta(tulos);

       return 0;
   }

   void tulosta(float luku){
        printf("tulos on %.3f \n", luku);
   }

   float summaa(float a, float b)  {
        float summ;
        summ=a+b;
        return summ; */


/* int lue();
void luvunTulostus(int tLuku);

int main()
{
    int luettuLuku;
    luettuLuku=lue();
    printf("Syotetty luku on %d \n", luettuLuku);
    luvunTulostus(luettuLuku);
    return 0;
}

int lue() {
    int Kluku;
    printf("Anna kokonaisluku \n");
    scanf("%d", &Kluku);
    return Kluku;
}

void luvunTulostus(int tLuku) {
    printf("Tulostettava luku on %d \n", tLuku);
} */

/*

int lue();

int main()
{
    int luettuLuku;
    luettuLuku=lue();
    printf("Syotetty luku on %d \n", luettuLuku);
    return 0;
}

int lue() {
    int Kluku;
    printf("Anna kokonaisluku \n");
    scanf("%d", &Kluku);
    return Kluku;
}  */


/*
void tulosta();

int main()
{
    tulosta();
    return 0;
}

void tulosta(){
    printf("Hei maailma \n");
}  */


/*

#define LKM 3

void tulostaMjono(char mj[]);
void lueLuvut(int tau[], int lukum);
void tulostaLuvut(int tau[], int lukum);

int main()
{

    char nimi[30]="Pekka";
    int luvut[LKM];

    tulostaMjono("Eka tulostus");
    tulostaMjono(nimi);
    lueLuvut(luvut, LKM);
    tulostaLuvut(luvut, LKM);

    printf("  \n");

    return 0;
}


void tulostaMjono(char mj[]){
    printf("%s \n", mj);
}

void lueLuvut(int tau[], int lukum) {
    for(int i=0; i<lukum; i++) {
        printf("Anna luku \n");
        scanf("%d", &tau[i]);
    }
}


void tulostaLuvut(int tau[], int lukum) {
    printf("Taulukon alkiot ovat \n");
    for(int i=0; i<lukum; i++)
        printf("%d \n", tau[i]);

}  */


/*   void tulosta(float luku);
    float summaa(float a, float b);



    int main(){

        float eka, toka, tulos;

        eka=10.55;
        toka=20.35;
        tulos=summaa(eka, toka);
        tulosta(tulos);

        toka=100;
        tulos=summaa(eka, toka);
        tulosta(tulos);

        return 0;
    }

    void tulosta(float luku){
         printf("tulos on %.3f \n", luku);
    }

    float summaa(float a, float b)  {
         float summ;
         summ=a+b;
         return summ;
    }   */


  /*  int main(){

        int eka, toka;

        eka=10;
        toka=20;
        eka-=toka;
        toka++;
        eka--;

        printf("eka on %d \n", eka);
        printf("Toka on %d \n", toka);

        return 0;
    }   */

/* int sum(int a, int b);
void second_sum(int a, int b);


int main(){


    int calc;
    int luku1=100, luku2=200;

    calc=sum(luku1, luku2);
    printf("luku1 on %d ja luku2 on %d\n", luku1, luku2);
    printf("The sum is %d \n", calc);
    second_sum(7,8);
    return 0;
}

int sum(int a, int b){
    int answer=a+b;
    return answer;
}

void second_sum(int a, int b){
    int answer=a+b;
    printf("The sum is %d\n", answer);
} */
