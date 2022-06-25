#include<stdio.h>


int SUM(int n)
{
    if(n>0)
       return SUM(n-1)+n;
    
    else
       return 0;
}


int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);

    printf("Sum is : %d", SUM(n));

    return 0;
}