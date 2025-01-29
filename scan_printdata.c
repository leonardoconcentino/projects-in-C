#include <stdio.h>
#include <string.h> //this library adds a function that is very useful to remove \n from an array

int main(){

    //variables
    int age = 0;
    float height = 0;
    char name [10] = ""; // only the first name
    char fullName[50] = ""; // full name
    int registration = 0; // student number of registration

    //beginning

    printf("Hello, dear student! Hope you are fine.\nWelcome to our system, please type the following informations as requested.\n"); //intro text

    printf("What is your full name?\n"); //getting user's full name
    fgets(fullName, sizeof(fullName), stdin); //i need to use this, so the user can enter their full name with spaces between names
    //normally, fgets catches data from an external file, but stdin catches from terminal
    fullName[strcspn(fullName, "\n")] = 0; //this function removes \n. everytime that fgets was catching the full name, it was adding \n.
    
   
    printf("May you please tell me how would you like to be called? Maybe your first name? :D \n"); //getting user's name
    scanf("%s", &name);

    printf("Please, type your age:\n"); //getting user's age
    scanf("%d", &age);

    printf("What is your height?\n"); //getting user's height
    scanf("%f", &height);

    printf("Type your registration number:\n"); //getting user's registration number
    scanf(" %d", &registration);
    
    printf("So, let's check the information that you gave me:\n"); 
    printf("Your full name is %s, but I may call you %s.\n", fullName, name); //say user's name and first name
    printf("You are %d years old, \n You are %.2fm tall, \n And your registration number is %d \n", age, height, registration); //print user's age, height and registration number
    // %.2f only shows 2 decimals places in print!

    return 0; //don't forget!

}