#include <stdio.h>
 #include <string.h>
#include <stdlib.h>
#define LKM 2


typedef struct Student_struct{
    char name[50];
    int id;
    int age;

}
Student;

int main(){

    FILE *filepointer;
    filepointer=fopen("C:/work/temp/students_data.txt","w");

    Student p1[LKM];
    char nimi[50]="XXX";
    char lopetus[]="LOPETA";
    int i=0;

    printf("Anna Max: 5 oppilaan tiedot. Nimi, ika ja opiskelijanumero! \n\n");

    while (i< LKM) //Taulukko tiivistettynä
        {
        printf("%d Oppilas \n", i+1);
        scanf("%s" "%d" "%d", p1[i].name, &p1[i].id, &p1[i].age);
        i++;
        }
        // Taulukon tulostus pyynnöstä
    while(strcmp(nimi, lopetus) !=0) {
        printf("Anna opiskelijan nimi \n \n");
        scanf("%s", nimi);
        for (i=0; i<LKM; i++) {
          if (strcmp(p1[i].name,nimi)==0){
          printf("%d. Opiskelija : %s-%d-%d. \n \n", i+1, p1[i].name, p1[i].id, p1[i].age);
          // Tietojen tallennus
          int valinta=0;
          printf("Haluatko tallentaa tiedot (Yes=1/No=2 \n");
          scanf("%d", &valinta);
          if (valinta==1){
              printf("Tallennetaan tietoja \n");
              fprintf(filepointer,"%d. Opiskelija: Nimi: %s, ika: %d, opiskelijanumero: %d. \n \n", i+1, p1[i].name, p1[i].id, p1[i].age);
          } else {
              printf("Tietoja ei tallennettu \n");
          }
          }}}

    return 0;
}


/*
#include <string.h>
// #include <stdlib.h>
#define LKM 3

typedef struct Student_struct{
    char name[50];
    int id;
    int age;

}
Student;

int main(){

    Student p1[LKM];
    char nimi[50]="XXX";
    char lopetus[]="LOPETA";
    int i=0;

    printf("Anna Max: 5 oppilaan tiedot. Nimi, ika ja opiskelijanumero! \n\n");

    while (i< LKM)
        {
        printf("%d Oppilas \n", i+1);

        scanf("%s" "%d" "%d", p1[i].name, &p1[i].id, &p1[i].age);

        i++;
        }

        while(strcmp(nimi, lopetus) !=0) {
            printf("Anna opiskelijan nimi \n \n");
            scanf("%s", nimi);
            for (i=0; i<LKM; i++) {
              if (strcmp(p1[i].name,nimi)==0){
              printf("%d. Opiskelija : %s-%d-%d. \n \n", i+1, p1[i].name, p1[i].id, p1[i].age);
            }}}
    return 0;
} */


/*  #include <stdlib.h>

int main()
{
   FILE *filepointer;
   FILE *tokapointer;

   filepointer=fopen("C:/work/temp/test2.txt","r");
   tokapointer=fopen("C:/work/temp/test2.txt","r");

   if ((filepointer == NULL) || (tokapointer == NULL))
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   int LKM=0;
   char sana[50];
   fscanf(filepointer, "%s", &sana);
   while(!feof(filepointer)) {
        LKM=LKM+1;
        fscanf(filepointer, "%s", &sana);
   }

   int R=0;
   char row[255];
   fgets(row, 255, tokapointer);
   while(!feof(tokapointer)){
       R=R+1;
       printf("%s",row);
       fgets(row, 255, tokapointer);
   }

   printf("\nSanojen lukumaara on %d \n", LKM);
   printf("rivien maara on %d \n", R );

   fclose(filepointer);
   fclose(tokapointer);

   return 0;
}  */


/*  #include <stdlib.h>

int main()
{

 FILE *filepointer;
 FILE *target;


 filepointer=fopen("C:/Qt/QTwork/source.txt","r");
 target =fopen("C:/Qt/QTwork/target.txt","w");
    if ((filepointer == NULL ) || ( target == NULL))
      {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
      }
//tiedoston tulostus
  char sanat[100];
  fscanf(filepointer, "%c", sanat);
  while(!feof(filepointer)) {
       printf("%s", sanat);
       fscanf(filepointer, "%c", sanat);
       }

  printf("\n\nTiedoston sisalla olevat , on vaihdettu ; \n\n");

//merkin vaihto
  char word;
  while((word = fgetc(filepointer)) != EOF) {
     if (word ==',') fputc(';' ,target );
     else fputc(word, target);
    }

  fclose(filepointer);
  fclose(target);

  return 0;
} */


/*  #include <stdlib.h>

int main()
{

  FILE *filepointer;
  char nimi[30];
  filepointer=fopen("C:/Qt/QTwork/test3.txt","a");

   if (filepointer == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   // tiedostoon kirjoitus
   scanf("%s", &nimi);
   fprintf(filepointer,"%s \n", nimi);

   fclose(filepointer);

   return 0;

} */

/* #include <stdlib.h>

int main()
{
   FILE *filepointer;
   FILE *tokapointer;

   char ch;
   filepointer=fopen("C:/Qt/QTwork/test2.txt","r");
   tokapointer=fopen("C:/Qt/QTwork/test3.txt","w");

   if ((filepointer == NULL) || (tokapointer == NULL))
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   int LKM=0;
   char word[50];
   fscanf(filepointer, "%s", &word);
   while(!feof(filepointer)) {
        LKM=LKM+1;
        printf("%s \n", word);
        fscanf(filepointer, "%s", &word);

   }
   printf("Sanojen lukumaara on %d \n", LKM);

   fclose(filepointer);
   fclose(tokapointer);

   return 0;
}
   */


    /*
   printf("The contents of file is:\n");

   //merkin vaihto
   while((ch = fgetc(filepointer)) != EOF) {
      if (ch==',') fputc(';' ,tokapointer );
      else fputc(ch, tokapointer);

          printf("%c", ch);

*/

 /*
#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *filepointer;
   char ch;
     filepointer=fopen("C:/Qt/QTwork/test3.txt","w");
   //filepointer=fopen("C:/Qt/QTwork/test2.txt","a");

   if (filepointer == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   // tiedostoon kirjoitus
   fprintf(filepointer,"Hello world\n");
   fprintf(filepointer, "Hello world again \n");

   char merkki='a';
   fputc(merkki, filepointer);
   fputc('B', filepointer);
   fputc('C', filepointer);
   fputc('\n', filepointer);
   fputc('D', filepointer);

   fclose(filepointer);

     return 0;

} */


 /*  printf("The contents of file is:\n");

   while((ch = fgetc(filepointer)) != EOF)
      printf("%c", ch);

   fclose(filepointer);
   return 0;
} */
