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
    char question[50];
    char answer[50];
    int value;
    bool answered;
};

void defineQuestions()
{
    struct question q1;
    struct question q2;
    struct question q3;
    struct question q4;
    struct question q5;
    struct question q6;
    struct question q7;
    struct question q8;
    struct question q9;
    struct question q10;
    struct question q11;
    struct question q12;
    struct question q13;
    struct question q14;
    struct question q15;
    struct question q16;
    struct question q17;
    struct question q18;
    struct question q19;
    struct question q20;
    struct question q21;
    struct question q22;
    struct question q23;
    struct question q24;
    struct question q25;
    struct question q26;
    struct question q27;
    struct question q28;
    struct question q29;
    struct question q30;

    //Q1 Specification Category 1
    strcpy(q1.category, "History");
    strcpy(q1.question, "This person was the 16th president of the United States.");
    strcpy(q1.answer, "Who is Abraham Lincoln");
    strcpy(q1.value, 100);
    strcpy(q1.answered,  false);

    //Q2 Specification Category 1
    strcpy(q2.category, "History");
    strcpy(q2.question, "This is the name of the youngest Pharoh of Egypt");
    strcpy(q2.answer, "Who is King Tut");
    strcpy(q2.value, 200);
    strcpy(q2.answered,  false);

    //Q3 Specification Category 1
    strcpy(q3.category, "History");
    strcpy(q3.question, "This is the name of the most famous structure in the Acropolis.");
    strcpy(q3.answer, "What is the Parthenon");
    strcpy(q3.value, 300);
    strcpy(q3.answered,  false);

    //Q4 Specification Category 1
    strcpy(q4.category, "History");
    strcpy(q4.question, "This is the year the war of 1812 began.");
    strcpy(q4.answer, "When is 1812");
    strcpy(q4.value, 400);
    strcpy(q4.answered,  false);

    //Q5 Specification Category 1
    strcpy(q5.category, "History");
    strcpy(q5.question, "The ancient world had 2 important cities named Thebes: one in Greece & one in this land.");
    strcpy(q5.answer, "What is Egypt");
    strcpy(q5.value, 500);
    strcpy(q5.answered,  false);

    //Q1 Specification Category 2
    strcpy(q6.category, "2000's Kids Shows");
    strcpy(q6.question, "He lives in a pineapple under the sea.");
    strcpy(q6.answer, "Who is Sponge Bob");
    strcpy(q6.value, 100);
    strcpy(q6.answered,  false);

    //Q2 Specification Category 2
    strcpy(q7.category, "2000's Kids Shows");
    strcpy(q7.question, "Ally Dawson was the main character in this Disney Channel tv show.");
    strcpy(q7.answer, "Austin and Ally");
    strcpy(q7.value, 200);
    strcpy(q7.answered,  false);

    //Q3 Specification Category 2
    strcpy(q8.category, "2000's Kids Shows");
    strcpy(q8.question, "The show Jonas featured this popular band of brothers.");
    strcpy(q8.answer, "Who are the Jonas Brothers");
    strcpy(q8.value, 300);
    strcpy(q8.answered,  false);

    //Q4 Specification Category 2
    strcpy(q9.category, "2000's Kids Shows");
    strcpy(q9.question, "Disney's Recess is about what part of a middle school day.");
    strcpy(q9.answer, "When is Recess");
    strcpy(q9.value, 400);
    strcpy(q9.answered,  false);

    //Q5 Specification Category 2
    strcpy(q10.category, "2000's Kids Shows");
    strcpy(q10.question, "This was the name of the web series filmed in the show iCarly.");
    strcpy(q10.answer, "What is iCarly");
    strcpy(q10.value, 500);
    strcpy(q10.answered,  false);

    //Q1 Specification Category 3
    strcpy(q11.category, "General Knowledge");
    strcpy(q11.question, "This animal is famous for looking part beaver and part duck.");
    strcpy(q11.answer, "What is a platypus");
    strcpy(q11.value, 100);
    strcpy(q11.answered,  false);

    //Q2 Specification Category 3
    strcpy(q12.category, "General Knowledge");
    strcpy(q12.question, "When three people enter a bathroom with 5 urinals labled 1-5 respectively, the three men stand at these 3 urinals.");
    strcpy(q12.answer, "What is 1, 3, 5");
    strcpy(q12.value, 200);
    strcpy(q12.answered,  false);

    //Q3 Specification Category 3
    strcpy(q13.category, "General Knowledge");
    strcpy(q13.question, "This is the video platform owned by Google home to many of the popular creators.");
    strcpy(q13.answer, "What is youtube");
    strcpy(q13.value, 300);
    strcpy(q13.answered,  false);

    //Q4 Specification Category 3
    strcpy(q14.category, "General Knowledge");
    strcpy(q14.question, "This is the number of countries located in Africa.");
    strcpy(q14.answer, "What is 54");
    strcpy(q14.value, 400);
    strcpy(q14.answered,  false);

    //Q5 Specification Category 3
    strcpy(q15.category, "General Knowledge");
    strcpy(q15.question, "This is the name of the band that sang the song Bycicle Race.");
    strcpy(q15.answer, "Who is Queen");
    strcpy(q15.value, 500);
    strcpy(q15.answered,  false);

    //Q1 Specification Category 4
    strcpy(q16.category, "");
    strcpy(q16.question, "");
    strcpy(q16.answer, "");
    strcpy(q16.value, 100);
    strcpy(q16.answered,  false);

    //Q2 Specification Category 4
    strcpy(q17.category, "");
    strcpy(q17.question, "");
    strcpy(q17.answer, "");
    strcpy(q17.value, 200);
    strcpy(q17.answered,  false);

    //Q3 Specification Category 4
    strcpy(q18.category, "");
    strcpy(q18.question, "");
    strcpy(q18.answer, "");
    strcpy(q18.value, 300);
    strcpy(q18.answered,  false);

    //Q4 Specification Category 4
    strcpy(q19.category, "");
    strcpy(q19.question, "T");
    strcpy(q19.answer, "");
    strcpy(q19.value, 400);
    strcpy(q19.answered,  false);

    //Q5 Specification Category 4
    strcpy(q20.category, "");
    strcpy(q20.question, "");
    strcpy(q20.answer, "");
    strcpy(q20.value, 500);
    strcpy(q20.answered,  false);

    //Q1 Specification Category 5
    strcpy(q6.category, "");
    strcpy(q6.question, "");
    strcpy(q6.answer, "");
    strcpy(q6.value, 100);
    strcpy(q6.answered,  false);

    //Q2 Specification Category 5
    strcpy(q7.category, "");
    strcpy(q7.question, "");
    strcpy(q7.answer, "");
    strcpy(q7.value, 200);
    strcpy(q7.answered,  false);

    //Q3 Specification Category 5
    strcpy(q8.category, "");
    strcpy(q8.question, "");
    strcpy(q8.answer, "");
    strcpy(q8.value, 300);
    strcpy(q8.answered,  false);

    //Q4 Specification Category 5
    strcpy(q9.category, "");
    strcpy(q9.question, "T");
    strcpy(q9.answer, "");
    strcpy(q9.value, 400);
    strcpy(q9.answered,  false);

    //Q5 Specification Category 5
    strcpy(q10.category, "");
    strcpy(q10.question, "");
    strcpy(q10.answer, "");
    strcpy(q10.value, 500);
    strcpy(q10.answered,  false);

    //Q1 Specification Category 6
    strcpy(q6.category, "");
    strcpy(q6.question, "");
    strcpy(q6.answer, "");
    strcpy(q6.value, 100);
    strcpy(q6.answered,  false);

    //Q2 Specification Category 6
    strcpy(q7.category, "");
    strcpy(q7.question, "");
    strcpy(q7.answer, "");
    strcpy(q7.value, 200);
    strcpy(q7.answered,  false);

    //Q3 Specification Category 6
    strcpy(q8.category, "");
    strcpy(q8.question, "");
    strcpy(q8.answer, "");
    strcpy(q8.value, 300);
    strcpy(q8.answered,  false);

    //Q4 Specification Category 6
    strcpy(q9.category, "");
    strcpy(q9.question, "T");
    strcpy(q9.answer, "");
    strcpy(q9.value, 400);
    strcpy(q9.answered,  false);

    //Q5 Specification Category 6
    strcpy(q10.category, "");
    strcpy(q10.question, "");
    strcpy(q10.answer, "");
    strcpy(q10.value, 500);
    strcpy(q10.answered,  false);

}




// Initializes the array of questions for the game
void initialize_game(void)
{
    // initialize each question struct and assign it to the questions array
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // print categories and dollar values for each unanswered question in questions array
}

// Displays the question for the category and dollar value
void display_question(char *category, int value)
{

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
