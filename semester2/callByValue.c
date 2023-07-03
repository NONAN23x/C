#include <stdio.h>

int swap(int a, int b)
{
    printf("--> Swapping\n");
    int temp = a;
    a = b;
    b = temp;
    printf("--> a=%d and b=%d\n", a, b);
    printf("--> Swapped!\n");
}

int main()
{
    int a = 3;
    int b = 5;

    printf("Values of a and b before swapping are: a=%d and b=%d\n", a, b);
    swap(a, b);       //Call by Value
    printf("Values of a and b after swapping are: a=%d and b=%d\n", a, b);
    return 0;
}
