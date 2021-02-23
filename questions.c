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

char categories[6][500];

struct question
{
    char category[50];
    char question[200];
    char answer[100];
    int value;
    bool answered;
};

// Initializes the array of questions for the game
void initialize_game(void)
{
    // initialize each question struct and assign it to the questions array
    struct question qArr[30];

    //Q1 Specification Category 1
    strcpy(qArr[0].category, "History");
    strcpy(qArr[0].question, "This person was the 16th president of the United States.");
    strcpy(qArr[0].answer, "Who is Abraham Lincoln");
    strcpy(qArr[0].value, 100);
    strcpy(qArr[0].answered,  false);

    //Q2 Specification Category 1
    strcpy(qArr[1].category, "History");
    strcpy(qArr[1].question, "This is the name of the youngest Pharoh of Egypt");
    strcpy(qArr[1].answer, "Who is King Tut");
    strcpy(qArr[1].value, 200);
    strcpy(qArr[1].answered,  false);

    //Q3 Specification Category 1
    strcpy(qArr[2].category, "History");
    strcpy(qArr[2].question, "This is the name of the most famous structure in the Acropolis.");
    strcpy(qArr[2].answer, "What is the Parthenon");
    strcpy(qArr[2].value, 300);
    strcpy(qArr[2].answered,  false);

    //Q4 Specification Category 1
    strcpy(qArr[3].category, "History");
    strcpy(qArr[3].question, "This is the year the war of 1812 began.");     
    strcpy(qArr[3].answer, "When is 1812");
    strcpy(qArr[3].value, 400);
    strcpy(qArr[3].answered,  false);

    //Q5 Specification Category 1
    strcpy(qArr[4].category, "History");
    strcpy(qArr[4].question, "The ancient world had 2 important cities named Thebes: one in Greece & one in this land.");
    strcpy(qArr[4].answer, "What is Egypt");
    strcpy(qArr[4].value, 500);
    strcpy(qArr[4].answered,  false);

    //Q1 Specification Category 2
    strcpy(qArr[5].category, "2000's Kids Shows");
    strcpy(qArr[5].question, "He lives in a pineapple under the sea.");
    strcpy(qArr[5].answer, "Who is Sponge Bob");
    strcpy(qArr[5].value, 100);
    strcpy(qArr[5].answered,  false);

    //Q2 Specification Category 2
    strcpy(qArr[6].category, "2000's Kids Shows");
    strcpy(qArr[6].question, "Ally Dawson was the main character in this Disney Channel tv show.");
    strcpy(qArr[6].answer, "Austin and Ally");
    strcpy(qArr[6].value, 200);
    strcpy(qArr[6].answered,  false);

    //Q3 Specification Category 2
    strcpy(qArr[7].category, "2000's Kids Shows");
    strcpy(qArr[7].question, "The show Jonas featured this popular band of brothers.");
    strcpy(qArr[7].answer, "Who are the Jonas Brothers");
    strcpy(qArr[7].value, 300);
    strcpy(qArr[7].answered,  false);

    //Q4 Specification Category 2
    strcpy(qArr[8].category, "2000's Kids Shows");
    strcpy(qArr[8].question, "Disney's Recess is about what part of a middle school day.");
    strcpy(qArr[8].answer, "When is Recess");
    strcpy(qArr[8].value, 400);
    strcpy(qArr[8].answered,  false);

    //Q5 Specification Category 2
    strcpy(qArr[9].category, "2000's Kids Shows");
    strcpy(qArr[9].question, "This was the name of the web series filmed in the show iCarly.");
    strcpy(qArr[9].answer, "What is iCarly");
    strcpy(qArr[9].value, 500);
    strcpy(qArr[9].answered,  false);

    //Q1 Specification Category 3
    strcpy(qArr[10].category, "General Knowledge");
    strcpy(qArr[10].question, "This animal is famous for looking part beaver and part duck.");
    strcpy(qArr[10].answer, "What is a platypus");
    strcpy(qArr[10].value, 100);
    strcpy(qArr[10].answered,  false);

    //Q2 Specification Category 3
    strcpy(qArr[11].category, "General Knowledge");
    strcpy(qArr[11].question, "When three people enter a bathroom with 5 urinals labled 1-5 respectively, the three men stand at these 3 urinals.");
    strcpy(qArr[11].answer, "What is 1, 3, 5");
    strcpy(qArr[11].value, 200);
    strcpy(qArr[11].answered,  false);

    //Q3 Specification Category 3
    strcpy(qArr[12].category, "General Knowledge");
    strcpy(qArr[12].question, "This is the video platform owned by Google home to many of the popular creators.");
    strcpy(qArr[12].answer, "What is youtube");
    strcpy(qArr[12].value, 300);
    strcpy(qArr[12].answered,  false);

    //Q4 Specification Category 3
    strcpy(qArr[13].category, "General Knowledge");
    strcpy(qArr[13].question, "This is the number of countries located in Africa.");
    strcpy(qArr[13].answer, "What is 54");
    strcpy(qArr[13].value, 400);
    strcpy(qArr[13].answered,  false);

    //Q5 Specification Category 3
    strcpy(qArr[14].category, "General Knowledge");
    strcpy(qArr[14].question, "This is the name of the band that sang the song Bycicle Race.");
    strcpy(qArr[14].answer, "Who is Queen");
    strcpy(qArr[14].value, 500);
    strcpy(qArr[14].answered,  false);

    //Q1 Specification Category 4
    strcpy(qArr[15].category, "Catchphrases");
    strcpy(qArr[15].question, "What's up Doc! is a phrase said by this cartoon character.");
    strcpy(qArr[15].answer, "Who is Bugs Bunny");
    strcpy(qArr[15].value, 100);
    strcpy(qArr[15].answered,  false);

    //Q2 Specification Category 4
    strcpy(qArr[16].category, "Catchphrases");
    strcpy(qArr[16].question, "Avengers assemble is a phrase used in this movie.");
    strcpy(qArr[16].answer, "What is Avengers.");
    strcpy(qArr[16].value, 200);
    strcpy(qArr[16].answered,  false);

    //Q3 Specification Category 4
    strcpy(qArr[17].category, "Catchphrases");
    strcpy(qArr[17].question, "D'oh is said by this character.");
    strcpy(qArr[17].answer, "Homer Simpson");
    strcpy(qArr[17].value, 300);
    strcpy(qArr[17].answered,  false);

    //Q4 Specification Category 4
    strcpy(qArr[18].category, "Catchphrases");
    strcpy(qArr[18].question, "Eat my shorts is said by this character.");
    strcpy(qArr[18].answer, "Bart Simpson");
    strcpy(qArr[18].value, 400);
    strcpy(qArr[18].answered,  false);

    //Q5 Specification Category 4
    strcpy(qArr[19].category, "Catchphrases");
    strcpy(qArr[19].question, "Come on down! is used in this popular gameshow.");
    strcpy(qArr[19].answer, "What is the price is right");
    strcpy(qArr[19].value, 500);
    strcpy(qArr[19].answered,  false);

    //Q1 Specification Category 5
    strcpy(qArr[20].category, "Childrens Books");
    strcpy(qArr[20].question, "The Lorax is a character in this popular childrens book.");
    strcpy(qArr[20].answer, "Who is the Lorax");
    strcpy(qArr[20].value, 100);
    strcpy(qArr[20].answered,  false);

    //Q2 Specification Category 5
    strcpy(qArr[21].category, "Childrens Books");
    strcpy(qArr[21].question, "This is the name of the author of Green Eggs and Ham.");
    strcpy(qArr[21].answer, "Dr. Seuss");
    strcpy(qArr[21].value, 200);
    strcpy(qArr[21].answered,  false);

    //Q3 Specification Category 5
    strcpy(qArr[22].category, "Childrens Books");
    strcpy(qArr[22].question, "This is the name of the book about a dirary of a whimpy kid.");
    strcpy(qArr[22].answer, "What is the diary of a whimpy kid");
    strcpy(qArr[22].value, 300);
    strcpy(qArr[22].answered,  false);

    //Q4 Specification Category 5
    strcpy(qArr[23].category, "Childrens Books");
    strcpy(qArr[23].question, "Green eggs go best with this food item according to Sam I Am.");
    strcpy(qArr[23].answer, "What is ham");
    strcpy(qArr[23].value, 400);
    strcpy(qArr[23].answered,  false);

    //Q5 Specification Category 5
    strcpy(qArr[24].category, "Childrens Books");
    strcpy(qArr[24].question, "This book is about a cat that enjoys his big hat.");
    strcpy(qArr[24].answer, "What is the cat in the hat");
    strcpy(qArr[24].value, 500);
    strcpy(qArr[24].answered,  false);

    //Q1 Specification Category 6
    strcpy(qArr[25].category, "General TV");
    strcpy(qArr[25].question, "Porky Pig is a character in this tv show.");
    strcpy(qArr[25].answer, "What is Looney Tunes");
    strcpy(qArr[25].value, 100);
    strcpy(qArr[25].answered,  false);

    //Q2 Specification Category 6
    strcpy(qArr[26].category, "General TV");
    strcpy(qArr[26].question, "Jim Parsons played this character on Big Bang Theory");
    strcpy(qArr[26].answer, "Who is Sheldon Cooper");
    strcpy(qArr[26].value, 200);
    strcpy(qArr[26].answered,  false);

    //Q3 Specification Category 6
    strcpy(qArr[27].category, "General TV");
    strcpy(qArr[27].question, "Wolverine was a part of this group");
    strcpy(qArr[27].answer, "Who are the X-men");
    strcpy(qArr[27].value, 300);
    strcpy(qArr[27].answered,  false);

    //Q4 Specification Category 6
    strcpy(qArr[28].category, "General TV");
    strcpy(qArr[28].question, "This is the female lead in the popular show New Girl");
    strcpy(qArr[28].answer, "Who is Zooey Deschanel");
    strcpy(qArr[28].value, 400);
    strcpy(qArr[28].answered,  false);

    //Q5 Specification Category 6
    strcpy(qArr[29].category, "General TV");
    strcpy(qArr[29].question, "Heisenberg is the alias used by a character in this popular tv show.");
    strcpy(qArr[29].answer, "What is breaking bad");
    strcpy(qArr[29].value, 500);
    strcpy(qArr[29].answered,  false);

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
        if((qArr[i].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[i].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");

    //2000's Kids Shows
    bool is_empty = true;

    printf("For 2000's Kids Shows\n");
    for (int a = 5; a < 10; a++)
    {
        if((qArr[i].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[i].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");


    // General Knowledge
    bool is_empty = true;

    printf("For General Knowledge\n");
    for (int a = 10; a < 15; a++)
    {
        if((qArr[i].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[i].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");


    // Catchphrases
    bool is_empty = true;

    printf("For Catchphrases\n");
    for (int a = 15; a < 20; a++)
    {
        if((qArr[i].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[i].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");


    // Childrens Books
    bool is_empty = true;

    printf("For Childrens Books\n");
    for (int a = 20; a < 25; a++)
    {
        if((qArr[i].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[i].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");

    // General TV
    bool is_empty = true;

    printf("For General TV\n");
    for (int a = 25; a < 30; a++)
    {
        if((qArr[i].answered == false){
            is_empty = false;
            printf("Question for $%d is still available\n", qArr[i].value);

        }
    }
    if (is_empty == true)printf("There are no questions left\n");
 
    

}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{
    int index = (value/100)-1;

    if (category == strcmp(category, "History")==0);
    else if(category == strcmp(category, "2000's Kids Shows")==0)index += 5;
    else if(category == strcmp(category, "General Knowledge")==0)index += 10;
    else if(category == strcmp(category, "Catchphrases")==0)index += 15;
    else if(category == strcmp(category, "Childrens Books")==0)index += 20;
    else if(category == strcmp(category, "General TV")==0)index += 25;

    printf("%s\n",qArr[index].question);

}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char *category, int value, char *answer)
{
    // Look into string comparison functions
    return false;
}

// Returns true if the question has already been answered
bool already_answered(char *category, int value)
{
    // lookup the question and see if it's already been marked as answered
    return false;
}
