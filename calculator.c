#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long add(long a, long b)
{
    return a + b;
}

long multiply(long a, long b)
{
    return a * b;
}

long divide(long a, long b)
{
    
    return a / b;
}

long subtract(long a, long b)
{
    return a - b;
}

long power(long a, long b)
{
    return pow(a, b);
}

int main(int argc, char const *argv[])
{
    int temp1 = 0;
    int temp2 = 0;
    int userChoice = 0;
    
    
    while (1)
    {
        printf("\n Calculator\n --------\n Supported Operations:\n");
        printf(" 1) Add\n 2) Multiply\n 3) Divide\n 4) Subtract\n 5) Power\n 6) Exit\n");
        printf(" $ ");
        scanf("%d", &userChoice);
        switch (userChoice)
        {
            case 0:
                printf("ERROR");
                break;

            case 1:
                scanf("%ld %ld", &temp1, &temp2);
                printf("The result is %d", add(temp1, temp2));
                system("clear");
                break;
            
            case 2:
                scanf("%ld %ld", &temp1, &temp2);
                printf("The result is %d", multiply(temp1, temp2));
                system("clear");
                break;

            case 3:
                scanf("%ld %ld", &temp1, &temp2);
                if (temp2 == 0)
                {
                    printf("\nZero Division Error\n");
                    break;
                }
                printf("The result is %d", divide(temp1, temp2));
                system("clear");
                break;    

            case 4:
                scanf("%ld %ld", &temp1, &temp2);
                printf("The result is %d", subtract(temp1, temp2));
                system("clear");
                break;    
            
            case 5:
                scanf("%ld %ld", &temp1, &temp2);
                printf("The result is %d", power(temp1, temp2));
                system("clear");
                break;

            case 6:
                printf("\nEXITING\n");
                exit(0);
                break;
        
            default:
                printf("Invalid Input\n");
                break;
        }
    }
    
    return 0;
}
