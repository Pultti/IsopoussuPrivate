#include <stdio.h>
#include <string.h>

typedef struct Person_struct{
    int pnumber;
    char pname[20];
}
person;

int main(){

    person p1;
    p1.pnumber=1;
    strcpy(p1.pname,"MARADONA");

    printf("Person1: name = %s number = %d \n",p1.pname, p1.pnumber);

    person *p2=&p1;
    //person *p2;
    //p2=&p1;

    p2->pnumber=p2->pnumber+68;
    printf("Person2: name = %s number = %d \n",p2->pname, p2->pnumber);

    return 0;
}


/*   typedef struct Person_struct{
    int pnumber;
    char pname[20];
}
person;

main(){

    person team[3];

    for(int x=0; x<=2; x++){
        printf("Anna %d. numero\n",x+1);
        scanf("%d",&team[x].pnumber);
        printf("Anna %d. nimi\n",x+1);
        fflush(stdin);
        gets(team[x].pname);
    }

    printf("Joukkueen jasenet\n");
    for(int x=0; x<=2; x++){
        printf("Nimi: %s Numero:%d\n", team[x].pname, team[x].pnumber);
    }

    return 0;
}  */


/*  #include <string.h>

typedef struct Person_struct{
    int pnumber;
    char pname[20];
} person;

int main(){

    person p1;
    person p2;

    p1.pnumber=1234;
    strcpy(p1.pname,"MARA");

    p2.pnumber=2468;
    strcpy(p2.pname,"PERA");


    printf("Person1: name = %s number = %d \n",p1.pname, p1.pnumber);
    printf("Person2: name = %s number = %d \n",p2.pname, p2.pnumber);



    return 0;
} */


/* struct Person_struct{
    int pnumber;
    char pname[20];
};

    int main(){

        struct Person_struct p1;
        struct Person_struct p2;

        p1.pnumber=1234;
        strcpy(p1.pname,"MARA");

        p2.pnumber=2468;
        strcpy(p2.pname,"PERA");


        printf("Person1: name = %s number = %d \n",p1.pname, p1.pnumber);
        printf("Person2: name = %s number = %d \n",p2.pname, p2.pnumber);

    return 0;
} */








/* int main(){


int xMuuttuja=5;
int *mypointer;

mypointer=&xMuuttuja;

*mypointer=*mypointer+1000;

printf("x:n arvo eli *mypointer on %d\n",*mypointer);
printf("x:n osoite eli mypointer on %p\n",mypointer);


} */


/*  #include <string.h>

int main()
{

    //kahden merkkijonon vertailu strcmp()-kirjastofunktiolla
    char mjLuettu[30]="XXX";
    char mjSana[]="LOPETUS";

    while(strcmp(mjLuettu, mjSana) !=0) {
        printf("Tulostetaan kunnes syotat LOPETUS \n");
        scanf("%s", mjLuettu);
    }

    printf("Hello World!\n");
    return 0;
}  */
