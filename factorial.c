// A simple program to calculate a foctorial of a given integer x by recursion
#include <stdio.h>      //#include preprocessor to import standard input and output header file

int factorial(int x);       //Initializing a function before declaration

int main()      //main
{
    int x = 0;      //initialize a variable x of value 0
    printf("Enter the integer: ");      //printing out the promt
    scanf("%i", &x);        //assigning the integer value from stdin to variable x
    printf("Factorial: %i", factorial(x));       //calling the function factorial()
    return 0;       //return 0
}

int factorial(int x)        //function definition
{
    if (x > 1)
    {
        return x * factorial(x-1);      //recursion
    }
    else
        return 1;
}