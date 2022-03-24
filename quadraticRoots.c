#include <stdio.h>
#include <math.h>

double findRoots(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Please enter the a, b, and c values of a quadratic equation: ");
    scanf("%i %i %i", &a , &b, &c);
    findRoots(a, b, c);
    return 0;
}

double findRoots(int a, int b, int c)
{
    int discriminant = 0;
    int root1 = 0;
    int root2 = 0;

    printf("Given Equation: (%ix^2) - (%ix) + (%i)\n", a, b, c);

    if (a<=0)
    {
        printf("The roots cant exist!!!\n");
        return 0;
    }
    else
        discriminant = (b*b)-4*a*c;

    printf("Discriminant is %i\n", discriminant);
    
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b-sqrt(discriminant))/(2*a);

    printf("The two roots are: %i %i", root1, root2);

}