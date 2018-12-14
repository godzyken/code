#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //petit jeu qui sert a "R!!!"

int main(int argc, char *argv[])
{
    char nom[10];
    char prenom[10];
    int age;

 // on demande le nom
    printf("Quel est votre nom ? ");
    scanf("%s", nom);

// on demande le prenom
    printf("Quel est votre prenom ? ");
    scanf("%s", prenom);

// on demande l'age
   printf("Donnez moi votre age : ");
   scanf("%d", &age);

   printf("Ah ! Vous vous appelez donc %s", prenom);
   printf(" %s ", nom);
   printf("Et vous avez %d an(s)!\n", age);

// en code ascii

   for(int i=0; i<= 10;i++){

        i = strlen(*argv);

         printf("votre nom ascii est : %c = %d\n", i);

         return i;

   }

   return 0;
}
