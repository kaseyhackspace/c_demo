/*
Demo of basic input, output, also variables
*/
#include <stdio.h> //include standard IO library to have access to basic functions
#define SIZE 50 //define preprocessor replaces first string with value in the code
// main function: what gets executed when you run the program
int main(int argc, char *argv[]){ // argc - number of arguments, argv array of command line arguments
    /*
    Variable delaration
    */
    int myint;
    float myfloat;
    char mychar;
    double mydouble;
    char mystring[SIZE];

    /*input samples*/
    printf("Enter integer: ");
    scanf("%d",&myint);
    printf("Enter float: ");
    scanf("%f",&myfloat);
    printf("Enter double: ");
    scanf("%lf",&mydouble);
    printf("Enter char: ");
    scanf("\n%c",&mychar);
    printf("Enter string: ");
    scanf("\n%s",mystring);
    //scanf("\n%[^\n]",mystring);

    /*output samples*/
    printf("your integer: %d \n",myint);
    printf("your float: %f \n",myfloat);
    printf("your double: %lf \n",mydouble);
    printf("your char: %c \n",mychar);
    printf("your string: %s \n",mystring);
    
    return 0; //returns '0', indicating successful exit of program
}