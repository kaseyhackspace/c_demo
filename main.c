/*
Demo of conditional statements
*/
#include <stdio.h> //include standard IO library to have access to basic functions
#define SIZE 50 //define preprocessor replaces first string with value in the code

float add(float a, float b){
    float c;
    c = a + b;
    return c;
}

float sub(float a, float b){
    float c;
    c = a - b;
    return c;
}

float mul(float a, float b){
    float c;
    c = a * b;
    return c;
}

float div(float a, float b){
    float c;
    c = a / b;
    return c;
}

float mod(float a,float b){
    float c;
    c = (int)a % (int)b;
    return c;
}

void my_pow(float a, float b, float * c){
    *c = 1.0;
    for(int ctr = 0;ctr < b; ctr ++){
        *c = *c * a;
    }
    return;
}

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
    char repeat;

    
    //loop until repeat variable is set to 'n'
    do{ 
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
        printf("6 \t-\t Power \n");
        scanf("%d",&choice);
   
        /*
        conditional statements
        */
        switch(choice){
            case 1:
                c = add(a,b);
                printf("addition of %f,%f is %f\n", a, b, c);
                break;
            case 2:
                c = sub(a,b);
                printf("subtraction of %f,%f is %f\n", a, b, c);
                break;
            case 3:
                c = mul(a,b);
                printf("multiplication of %f,%f is %f\n", a, b, c);
                break;
            case 4:
                c = div(a,b);
                printf("division of %f,%f is %f\n", a, b, c);
                break;
            case 5:
                c = mod(a,b);
                printf("modulo of %f,%f is %f\n", a, b, c);
                break;
            case 6:
                my_pow(a,b,&c);
                printf("%f to the power of %f is %f \n", a, b, c);
                break;
            default:
                printf("Invalid choice \n");
        }
        printf("Repeat? ('y' or 'n')");
        scanf("\n%c",&repeat);
    }while(repeat == 'y');
    return 0; //returns '0', indicating successful exit of program
}