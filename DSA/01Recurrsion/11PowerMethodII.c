#include<stdio.h>

int Power(int m, int n)
{
    if(n==0)
        return 1;

    if(n%2==0)
        return Power(m*m, n/2);

    else
        return m*Power(m*m, (n-1)/2);
}


int main()
{
    int m, n;
    printf("Enter base : ");
    scanf("%d", &m);
    printf("Enter power : ");
    scanf("%d", &n);

    printf("Value is : %d", Power(m, n));

    return 0;
}