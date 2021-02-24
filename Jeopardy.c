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

    bool loop = true;
    bool categoryBool = true;
    bool questionBool = false;
  
    // Perform an infinite loop getting command input from users until game ends
    while (fgets(buffer, BUFFER_LEN, stdin) != NULL)
    {
      //input a category, if it does not exist they are pompted again until it does
      char category[100];
      char answer[100];

      initialize_game();

      if (categoryBool == true) {
        //displays all available questions in each category 
        display_categories();
        categoryBool = false;
      }

      //ask the user to choose a category and value to display the question in that slot
      printf("\nPlease enter a category.\n");
      scanf(" %s",category);

      //looking for a value between 100 and 500 if it is not of 100 it will be floored in the function if it does not fit the criteria the promp is repeated until valid input
      int value;
      while (!(value >= 100 && value <= 500))
      {
      printf("Please enter a value.\n");
      scanf(" %d", &value);        
      }

      display_question(category, value);
      printf("\nPlease enter your response.\n");
      scanf(" %s", answer);


    }

    return EXIT_SUCCESS;
}
