#include<stdio.h>

int Power(int m, int n)
{
    if(n>0)
       return m*Power(m, n-1);

    else
       return 1;
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