/*
Demo of command line arguments
*/
#include <stdio.h> //include standard IO library to have access to basic functions

// main function: what gets executed when you run the program
int main(int argc, char *argv[]){ // argc - number of arguments, argv array of command line arguments
    if(argc > 1){
        printf("Hello %s!",argv[1]); //prints hello argv[1] to the standard output stream
    }
    else {
        printf("No additional command line arguments");
    }
    
    return 0; //returns '0', indicating successful exit of program
}