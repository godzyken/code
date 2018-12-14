#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //petit jeu qui sert a "R!!!"

int main()
{

    printf("\n *-----------------------------*");
    printf("\n |                             |");
    printf("\n |Programme d'entrees-Sortie 2!|");
    printf("\n |        SALUT l'AMI !        |");
    printf("\n |                             |");
    printf("\n *-----------------------------*\n\n");

    char nom[10];
    char prenom[10];
    int age[4];


 // on demande le nom
    printf("Quel est votre nom ? ");
    scanf("%s", nom);

// on demande le prenom
    printf("Quel est votre prenom ? ");
    scanf("%s", prenom);

// on demande l'age
   printf("Donnez moi votre age : ");
   scanf("%d", &age);


   printf("\nAh ! Vous vous appelez donc %s %s, et vous avez %d an(s)!\n\n", nom, prenom, age);

   printf("\n -------------------------------------------------------- ");
   printf("\n");

// on affiche chaque caractere
     int c = 0;
   for(c; c<= strlen(nom);c++){
        char l;

        l= nom[c];

         printf("Votre nom contient la lettre : %c \n\n", l);
   }

    printf("\n -------------------------------------------------------- ");
    printf("\n");

    int d = 0;
   for(d; d<= strlen(prenom);d++){
        char l;

        l= prenom[d];

         printf("et votre prenom contient la lettre : %c \n\n", l);
   }
     printf("\n -------------------------------------------------------- ");
     printf("\n");

// le nom en code ascii
    int i = 0;
   for(i; i<= strlen(nom);i++){
        char l;

        l= nom[i];

         printf("Votre nom ascii est : %d \n\n", l);
   }

   printf("\n -------------------------------------------------------- ");
   printf("\n");

// le prenom en code ascii
    int j = 0;
    for(j; j<= strlen(prenom);j++){
        char l;

        l= prenom[j];

         printf("et votre prenom ascii est : %d \n\n", l);

   }

   printf("\n -------------------------------------------------------- ");
   printf("\n");

// affichage du prenom en exadecimal

    printf("Votre nom en Hexadecimal est : %x \n\n", nom);

    printf("et votre prenom en Hexadecimal est : %x \n\n", prenom);

    printf("\n -------------------------------------------------------- ");
    printf("\n");
    printf("AllEZ CIAO MA COUIIILLLE !!\n\n");

   return 0;
}
