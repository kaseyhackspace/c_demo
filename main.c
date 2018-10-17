/*
Demo of arithmetic and conditional operators
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

    /*input samples*/
    printf("Enter float for a: ");
    scanf("%f",&a);
    printf("Enter float for b: ");
    scanf("%f",&b);

    /*
    arithmetic operations 
    */
    c = a + b;
    printf("addtion of %f,%f is %f\n", a, b, c);
    c = a - b;
    printf("subtraction of %f,%f is %f\n", a, b, c);
    c = a * b;
    printf("multiplication of %f,%f is %f\n", a, b, c);
    c = a / b;
    printf("division of %f,%f is %f\n", a, b, c);
    c = (int)a % (int)b;
    printf("modulo of %f,%f is %f\n", a, b, c);

    /*
    conditional operators
    */
    printf("\n\n");
    boolean = a > b;
    printf("%f > %f is %d \n", a, b, boolean);
    boolean = a < b;
    printf("%f < %f is %d \n", a, b, boolean);
    boolean = a >= b;
    printf("%f >= %f is %d \n", a, b, boolean);
    boolean = a <= b;
    printf("%f <= %f is %d \n", a, b, boolean);
    boolean = a == b;
    printf("%f == %f is %d \n", a, b, boolean);
    boolean = a != b;
    printf("%f != %f is %d \n", a, b, boolean);
    
    return 0; //returns '0', indicating successful exit of program
}