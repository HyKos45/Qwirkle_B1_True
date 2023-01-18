//
//  main.c
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#include "header.h"

int main(int argc, const char * argv[])
{
   int fin;

   fin = 0;
   while(!fin)
   {
      int c;

      /* affichage menu */
      printf("1.Choix 1 : Plateau\n"
             "2.Choix 2\n"
             "3.Choix 3\n"
             "4.Quitter\n");

      c = getchar();

      /* suppression des caracteres dans stdin */
      if(c != '\n' && c != EOF)
      {
         int d;
         while((d = getchar()) != '\n' && d != EOF);
      }

      switch(c)
      {
         case '1':
              plateau();
            break;
         case '2':
            printf("Choix 2\n");
            break;
         case '3':
            printf("Choix 3\n");
            break;
         case '4':
            fin = 1;
            break;
         default:
            printf("Choix errone\n");
      }
   }

   return 0;
}
