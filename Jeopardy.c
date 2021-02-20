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
#include <stdbool.h>

#include "questions.h"
#include "players.h"
#include "jeopardy.h"


// Put macros or constants here using #define
#define BUFFER_LEN 256
#define NUM_PLAYERS 4

// Put global environment variables here

// Processes the answer from the user containing what is or who is and tokenizes it to retrieve the answer.
void tokenize(char *input, char **tokens);

// Displays the game results for each player, their name and final score, ranked from first to last place
void show_results(player *players, int num_players);

int main(int argc, char *argv[])
{
    // An array of 4 players, may need to be a pointer if you want it set dynamically
    player players[NUM_PLAYERS];




    // Input buffer and and commands
    char buffer[BUFFER_LEN] = { 0 };

    // Display the game introduction and initialize the questions
    initialize_game();
    //creating test name array
    //Variable to hold how many valaid names have been entered
    int CountedP=0;
    //Variable to hold enterd name
    char name[100];
    // Prompt for players names
    //loop until 4 valaid names have been enterd
    while (CountedP!=4) {
      //Ask for Player to enter name
      printf("Enter Player Name:\n" );
      //Scan for name
      scanf(" %s",name);
      //Check if name is valid
      if(player_exists(players,(CountedP+1),name)){
        //if name is valid add name to player array
        strcpy(players[CountedP].name,name);
        //Increment valid names variable
        CountedP++;
      }
    }

    printf("\n" );
    printf("Names\n" );
    //Loop to print entered names
    for(int x=0; x<CountedP;x++){
      printf("%s\n",players[x].name );
    }
    //initialize Scores
    for(int x=0; x<CountedP;x++){
      players[x].score=0;
    }
  





    // Perform an infinite loop getting command input from users until game ends
    while (fgets(buffer, BUFFER_LEN, stdin) != NULL)
    {
        // Call functions from the questions and players source files

        // Execute the game until all questions are answered

        // Display the final results and exit

        initialize_game();
        
    }
    return EXIT_SUCCESS;
}
