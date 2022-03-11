#include <stdio.h>
#include <math.h>

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int divide(int x, int y);

int main(){
    int x = 0;
    int y = 0;
    printf("Please input the two integers seperated by a space.\n");
    scanf("%d %d", &x, &y);
    addition(x, y);
    subtraction(x, y);
    multiplication(x, y);
    divide(x, y);
}

int addition(int x, int y){
    int sum = x + y;
    printf("The sum for %d and %d is %d.\n", x, y, sum);
}

int subtraction(int x, int y){
    int sub = 0;
    if (x > y)
    sub = x - y;
    else
    sub = y - x;
    printf("The subtraction for %d and %d is %d.\n", x, y, sub);
}

int multiplication(int x, int y){
    int product = x * y;
    printf("The product of %d times %d is %d.\n", x, y, product);
}

int divide(int x, int y){
    int div = 0;
    if (x == 0 || y == 0)
    printf("Cannot divide by zero currently.");
    else {
        div = x / y;
        printf("The division of %d and %d is %d.\n", x, y, div);
    }
    
}