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
#include "questions.h"

//char categories[6][500];

struct question
{
    char category[50];
    char question[200];
    char answer[100];
    int value;
    bool answered;
};

struct question qArr[30];


// Initializes the array of questions for the game
void initialize_game(void)
{
    // initialize each question struct and assign it to the questions array
   
    //Q1 Specification Category 1
    strcpy(qArr[0].category, "History");
    strcpy(qArr[0].question, "This person was the 16th president of the United States.");
    strcpy(qArr[0].answer, "Who is Abraham Lincoln");
    qArr[0].value = 100;
    qArr[0].answered = false;

    //Q2 Specification Category 1
    strcpy(qArr[1].category, "History");
    strcpy(qArr[1].question, "This is the name of the youngest Pharoh of Egypt");
    strcpy(qArr[1].answer, "Who is King Tut");
    qArr[1].value = 200;
    qArr[1].answered = false;

    //Q3 Specification Category 1
    strcpy(qArr[2].category, "History");
    strcpy(qArr[2].question, "This is the name of the most famous structure in the Acropolis.");
    strcpy(qArr[2].answer, "What is the Parthenon");
    qArr[2].value = 300;
    qArr[2].answered = false;

    //Q4 Specification Category 1
    strcpy(qArr[3].category, "History");
    strcpy(qArr[3].question, "This is the year the war of 1812 began.");     
    strcpy(qArr[3].answer, "When is 1812");
    qArr[3].value = 400;
    qArr[3].answered = false;

    //Q5 Specification Category 1
    strcpy(qArr[4].category, "History");
    strcpy(qArr[4].question, "The ancient world had 2 important cities named Thebes: one in Greece & one in this land.");
    strcpy(qArr[4].answer, "What is Egypt");
    qArr[4].value = 500;
    qArr[4].answered = false;

    //Q1 Specification Category 2
    strcpy(qArr[5].category, "2000's Kids Shows");
    strcpy(qArr[5].question, "He lives in a pineapple under the sea.");
    strcpy(qArr[5].answer, "Who is Sponge Bob");
    qArr[5].value = 100;
    qArr[5].answered = false;

    //Q2 Specification Category 2
    strcpy(qArr[6].category, "2000's Kids Shows");
    strcpy(qArr[6].question, "Ally Dawson was the main character in this Disney Channel tv show.");
    strcpy(qArr[6].answer, "Austin and Ally");
    qArr[6].value = 200;
    qArr[6].answered = false;

    //Q3 Specification Category 2
    strcpy(qArr[7].category, "2000's Kids Shows");
    strcpy(qArr[7].question, "The show Jonas featured this popular band of brothers.");
    strcpy(qArr[7].answer, "Who are the Jonas Brothers");
    qArr[7].value = 300;
    qArr[7].answered = false;

    //Q4 Specification Category 2
    strcpy(qArr[8].category, "2000's Kids Shows");
    strcpy(qArr[8].question, "Disney's Recess is about what part of a middle school day.");
    strcpy(qArr[8].answer, "When is Recess");
    qArr[8].value = 400;
    qArr[8].answered = false;

    //Q5 Specification Category 2
    strcpy(qArr[9].category, "2000's Kids Shows");
    strcpy(qArr[9].question, "This was the name of the web series filmed in the show iCarly.");
    strcpy(qArr[9].answer, "What is iCarly");
    qArr[9].value = 500;
    qArr[9].answered = false;

    //Q1 Specification Category 3
    strcpy(qArr[10].category, "General Knowledge");
    strcpy(qArr[10].question, "This animal is famous for looking part beaver and part duck.");
    strcpy(qArr[10].answer, "What is a platypus");
    qArr[10].value = 100;
    qArr[10].answered = false;

    //Q2 Specification Category 3
    strcpy(qArr[11].category, "General Knowledge");
    strcpy(qArr[11].question, "When three people enter a bathroom with 5 urinals labled 1-5 respectively, the three men stand at these 3 urinals.");
    strcpy(qArr[11].answer, "What is 1, 3, 5");
    qArr[11].value = 200;
    qArr[11].answered = false;

    //Q3 Specification Category 3
    strcpy(qArr[12].category, "General Knowledge");
    strcpy(qArr[12].question, "This is the video platform owned by Google home to many of the popular creators.");
    strcpy(qArr[12].answer, "What is youtube");
    qArr[12].value = 300;
    qArr[12].answered = false;

    //Q4 Specification Category 3
    strcpy(qArr[13].category, "General Knowledge");
    strcpy(qArr[13].question, "This is the number of countries located in Africa.");
    strcpy(qArr[13].answer, "What is 54");
    qArr[13].value = 400;
    qArr[13].answered = false;

    //Q5 Specification Category 3
    strcpy(qArr[14].category, "General Knowledge");
    strcpy(qArr[14].question, "This is the name of the band that sang the song Bycicle Race.");
    strcpy(qArr[14].answer, "Who is Queen");
    qArr[14].value = 500;
    qArr[14].answered = false;

    //Q1 Specification Category 4
    strcpy(qArr[15].category, "Catchphrases");
    strcpy(qArr[15].question, "What's up Doc! is a phrase said by this cartoon character.");
    strcpy(qArr[15].answer, "Who is Bugs Bunny");
    qArr[15].value = 100;
    qArr[15].answered = false;

    //Q2 Specification Category 4
    strcpy(qArr[16].category, "Catchphrases");
    strcpy(qArr[16].question, "Avengers assemble is a phrase used in this movie.");
    strcpy(qArr[16].answer, "What is Avengers.");
    qArr[16].value = 200;
    qArr[16].answered = false;

    //Q3 Specification Category 4
    strcpy(qArr[17].category, "Catchphrases");
    strcpy(qArr[17].question, "D'oh is said by this character.");
    strcpy(qArr[17].answer, "Homer Simpson");
    qArr[17].value = 300;
    qArr[17].answered = false;

    //Q4 Specification Category 4
    strcpy(qArr[18].category, "Catchphrases");
    strcpy(qArr[18].question, "Eat my shorts is said by this character.");
    strcpy(qArr[18].answer, "Bart Simpson");
    qArr[18].value = 400;
    qArr[18].answered = false;

    //Q5 Specification Category 4
    strcpy(qArr[19].category, "Catchphrases");
    strcpy(qArr[19].question, "Come on down! is used in this popular gameshow.");
    strcpy(qArr[19].answer, "What is the price is right");
    qArr[19].value = 500;
    qArr[19].answered = false;

    //Q1 Specification Category 5
    strcpy(qArr[20].category, "Childrens Books");
    strcpy(qArr[20].question, "The Lorax is a character in this popular childrens book.");
    strcpy(qArr[20].answer, "Who is the Lorax");
    qArr[20].value = 100;
    qArr[20].answered = false;

    //Q2 Specification Category 5
    strcpy(qArr[21].category, "Childrens Books");
    strcpy(qArr[21].question, "This is the name of the author of Green Eggs and Ham.");
    strcpy(qArr[21].answer, "Dr. Seuss");
    qArr[21].value = 200;
    qArr[21].answered = false;

    //Q3 Specification Category 5
    strcpy(qArr[22].category, "Childrens Books");
    strcpy(qArr[22].question, "This is the name of the book about a dirary of a whimpy kid.");
    strcpy(qArr[22].answer, "What is the diary of a whimpy kid");
    qArr[22].value = 300;
    qArr[22].answered = false;

    //Q4 Specification Category 5
    strcpy(qArr[23].category, "Childrens Books");
    strcpy(qArr[23].question, "Green eggs go best with this food item according to Sam I Am.");
    strcpy(qArr[23].answer, "What is ham");
    qArr[23].value = 400;
    qArr[23].answered = false;

    //Q5 Specification Category 5
    strcpy(qArr[24].category, "Childrens Books");
    strcpy(qArr[24].question, "This book is about a cat that enjoys his big hat.");
    strcpy(qArr[24].answer, "What is the cat in the hat");
    qArr[24].value = 500;
    qArr[24].answered = false;

    //Q1 Specification Category 6
    strcpy(qArr[25].category, "General TV");
    strcpy(qArr[25].question, "Porky Pig is a character in this tv show.");
    strcpy(qArr[25].answer, "What is Looney Tunes");
    qArr[25].value = 100;
    qArr[25].answered = false;

    //Q2 Specification Category 6
    strcpy(qArr[26].category, "General TV");
    strcpy(qArr[26].question, "Jim Parsons played this character on Big Bang Theory");
    strcpy(qArr[26].answer, "Who is Sheldon Cooper");
    qArr[26].value = 200;
    qArr[26].answered = false;

    //Q3 Specification Category 6
    strcpy(qArr[27].category, "General TV");
    strcpy(qArr[27].question, "Wolverine was a part of this group");
    strcpy(qArr[27].answer, "Who are the X-men");
    qArr[27].value = 300;
    qArr[27].answered = false;

    //Q4 Specification Category 6
    strcpy(qArr[28].category, "General TV");
    strcpy(qArr[28].question, "This is the female lead in the popular show New Girl");
    strcpy(qArr[28].answer, "Who is Zooey Deschanel");
    qArr[28].value = 400;
    qArr[28].answered = false;

    //Q5 Specification Category 6
    strcpy(qArr[29].category, "General TV");
    strcpy(qArr[29].question, "Heisenberg is the alias used by a character in this popular tv show.");
    strcpy(qArr[29].answer, "What is breaking bad");
    qArr[29].value = 500;
    qArr[29].answered = false;

}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // Since there is no get category function the output is static for categories
    
    // history
    bool is_empty = true;

    printf("For history\n");
    for (int a = 0; a < 5; a++)
    {
        if(qArr[a].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[a].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");

    //2000's Kids Shows
    is_empty = true;

    printf("For 2000's Kids Shows\n");
    for (int b = 5; b < 10; b++)
    {
        if(qArr[b].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[b].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");


    // General Knowledge
    is_empty = true;

    printf("For General Knowledge\n");
    for (int c = 10; c < 15; c++)
    {
        if(qArr[c].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[c].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");


    // Catchphrases
    is_empty = true;

    printf("For Catchphrases\n");
    for (int d = 15; d < 20; d++)
    {
        if(qArr[d].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[d].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");


    // Childrens Books
    is_empty = true;

    printf("For Childrens Books\n");
    for (int e = 20; e < 25; e++)
    {
        if(qArr[e].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[e].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");

    // General TV
    is_empty = true;

    printf("For General TV\n");
    for (int f = 25; f < 30; f++)
    {
        if(qArr[f].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[f].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");
 
    

}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{
    int index = (value/100)-1;

    if (strcmp(category, "History")==0);
    else if(strcmp(category, "2000's")==0)index += 5;
    else if(strcmp(category, "General")==0)index += 10;
    else if(strcmp(category, "Catchphrases")==0)index += 15;
    else if(strcmp(category, "Childrens")==0)index += 20;
    else if(strcmp(category, "General2")==0)index += 25;

    printf("%s\n",qArr[index].question);

}

/*// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char *category, int value, char *answer)
{
    int i = (value/100) - 1;
    int index = 0;

    if (strcmp(category, "2000's Kids Shows") == 0) { 
        if ( i == 0 ) {
            strcmp(qArr[index].answer,);
        } 
    }

    // Look into string comparison functions
    return false;
}*/

// Returns true if the question has already been answered
bool already_answered(char *category, int value)
{
    // lookup the question and see if it's already been marked as answered
    return false;
}
