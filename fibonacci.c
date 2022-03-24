#include <stdio.h>

int fib(int n);

int main()
{
    int n = 0;
    int ans = 0;
    printf("Please enter the term: ");
    scanf("%d", &n);
    ans = fib(n);
    printf("The fibonacci series at position %i is %i\n", n, ans);
    
    return 0;
}

int fib(int n)
{
    if (n<=1)
        return n;
    return fib(n-1) + fib(n-2);
}