#include<stdio.h> 

int Fibonacci(int n)
{
    if(n<=1)
        return n;
    
    return Fibonacci(n-2)+Fibonacci(n-1);
}

int main()
{
    
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("Fibonacci is : %d", Fibonacci(n));

    return 0;
}
