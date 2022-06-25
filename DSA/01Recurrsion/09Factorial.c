#include<stdio.h>

int Factorial(int n)
{
    if(n>0)
        return Factorial(n-1)*n;

    else
        return 1; 
}


int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("Factorial is : %d", Factorial(n));

    return 0;
}