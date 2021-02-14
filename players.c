/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <GROUP MEMBERS>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "players.h"
struct player{
  char *name;
  int score;
};

// Returns true if the player name matches one of the existing players
bool player_exists( player *players, int num_players, char *name)
{

    //loop for number of players
    for (int i=0;i<num_players;i++){

        //compare user entered name (name) to names in struct ((player+i)->name)
        if (strcmp(name, ((players+i)->name))==0) {
          //print if name is taken
          printf("Name is taken\n" );
          //return false if name is taken
          return false;
        }
    }
    //ELSE print name isn't taken
    printf("Name isn't taken\n" );
    //return true
    return true;
}
// Go through the list of players and update the score for the
// player given their name
void update_score(player *players, int num_players, char *name, int score)
{
  //loop for number of players
  for (int i=0;i<num_players;i++){

      //Find Player name who scored
      if (strcmp(name, ((players+i)->name))==0) {
        //Increase player score
        (players+i)->score+=score;

      }
  }
}
