#include <stdio.h>

int main(){

    //variables are "boxes" that you put data inside. the structure to declare is: variable type data + variable name (remember that it's case sensitive!. and you can use "_")

    int age = 0; //numbers that are integers

    float height = 0; //numbers that are real (or, in a simple way, numbers with comma ",")

    float weight = 0; //double are numbers that are real, but double is > than float (can "store" bigger numbers or more decimals places)

    char nameInitial = 'L'; // this is only for one letter. single quote

    char name[20] = ""; //since C don't have string, we declare a array of characteres. we need to give a range to this array inside the []. double quote

    //always start the variable with a value along the algorithm, so you can avoid any "data trash" inside it

    /* how to use prinf()
    
    syntax --> printf("%format"1, "%format"2,..., variable1, variable2)

    format:
    %d and %i --> print an integer in decimal format
    %f --> print a float in the standart format
    %e --> print a float in scientific notation format
    %c --> print a single character
    %s --> print an array of characters
    
    now, an exemple of printing the variables. if i want to detail the print, i can add text before the %format
    printf("Initial: %c\n", nameInitial); // single printing
    printf("Name: %s\n", "Age: %d\n", name, age); // multiple printing

    */

    /* how to use scanf()
    
    syntax --> scanf("format1", "format2",..., &variable1, &variable2, ...)

    format:
    %d and %i --> scan an integer in decimal format
    %f --> scan a float in the standart format
    %e --> scan a float in scientific notation format
    %c --> scan a single character
    %s --> scan an array of characters
    */
   
    printf("Hello, user! =D \nHere, I am learning to scan and print infos that were given by you. May you help me?\n"); //intro text

    printf("What is your name, my dear user?\n"); //first print to collect data from the user. in this case, their name
    scanf("%s", &name); // this command scan the input from the user and inserts data into the specific variable
    printf("Oh, hello %s! It's a huge pleasure to meet you\n", name); //return their name and salute

    printf("A little test for you: what is your name initial?\n"); //scanning the initial
    scanf(" %c", &nameInitial);
    printf("Now this is my favorite letter: %c!\n", nameInitial);

    printf("Say, please, your name, type enter, and then your initial at the sequence.\n"); //scanning two data at the same time
    scanf("%s %c", &name, &nameInitial); //put both format and both variables
    printf("OK, so it's %c from %s!\n", nameInitial, name);

    printf("And how old are you?\n"); // now, getting their age
    scanf("%d", &age);
    printf("So, your age is: %d! Cool 8) \n", age);

    printf("Let's talk about numbers. What is your height?\n"); //scanning height
    scanf("%f", &height);
    printf("I feel so connected to you knowing all of this! %s's height is %f!\n", name, height); // returning the name again and saying the height

    printf("OK, final question, dear friend. What is your weight?\n"); //final question: weight
    scanf("%f", &weight);
    printf("BINGO! You weight %f!\n", weight);


    printf("I am very happy to know more about you, %s. Thank you very much and I hope to see you again. Byeeeeee :D \n", name); // goodbye!


   return 0;


}