#include<stdio.h>

int C(int n, int r)
{
    if(n==r || r==0)
        return 1;
    
    return C(n-1, r-1)+C(n-1, r);
}


int main()
{
    int n, r;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);

    printf("Value is : %d",C(n,r));

    return 0;
}