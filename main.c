/*
Demo of conditional statements
*/
#include <stdio.h> //include standard IO library to have access to basic functions
#define SIZE 50 //define preprocessor replaces first string with value in the code
// main function: what gets executed when you run the program
int main(int argc, char *argv[]){ // argc - number of arguments, argv array of command line arguments
    /*
    Variable delaration
    */
    float a = 0;
    float b = 0;
    float c = 0;
    int boolean;
    int choice;

    /*input samples*/
    printf("Enter float for a: ");
    scanf("%f",&a);
    printf("Enter float for b: ");
    scanf("%f",&b);

    //print choices
    printf("What operation do you want to perform on %f and %f?\n", a, b);
    printf("1 \t-\t Addition \n");
    printf("2 \t-\t Subtraction \n");
    printf("3 \t-\t Multiplication \n");
    printf("4 \t-\t Division \n");
    printf("5 \t-\t Modulo \n");
    scanf("%d",&choice);

    /*
    conditional statements
    */
    switch(choice){
        case 1:
            c = a + b;
            printf("addition of %f,%f is %f\n", a, b, c);
            break;
        case 2:
            c = a - b;
            printf("subtraction of %f,%f is %f\n", a, b, c);
            break;
        case 3:
            c = a * b;
            printf("multiplication of %f,%f is %f\n", a, b, c);
            break;
        case 4:
            c = a / b;
            printf("division of %f,%f is %f\n", a, b, c);
            break;
        case 5:
            c = (int)a % (int)b;
            printf("modulo of %f,%f is %f\n", a, b, c);
            break;
        default:
            printf("Invalid choice \n");
    }

    return 0; //returns '0', indicating successful exit of program
}