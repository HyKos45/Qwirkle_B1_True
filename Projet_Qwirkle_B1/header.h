//
//  header.h
//  Projet_Qwirkle_B1
//
//  Created by Alexandre Puiseux on 18/01/2023.
//

#ifndef header_h
#define header_h

#include <stdio.h>
#include <stdlib.h>
// #include <windows.h>

#define MAX_X 12
#define MAX_Y 26

// Scructure

struct Joueur{
    char nom[10];
    int score;
};typedef struct Joueur JOUEUR;

struct Plateau{
    int x;
    int y;
    char plateau [MAX_X][MAX_Y];
};typedef struct Plateau PLATEAU;

// Sous-Programme
void plateau (void);

//Sous-Programme pour les couleurs
/*
 void color(int t,int f);
 */

#endif /* header_h */
