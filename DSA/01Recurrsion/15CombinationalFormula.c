#include<stdio.h>


int fact(int n)
{
    if(n==0)
        return 1;
    
    else
        return n*fact(n-1);

}

int C(int n, int r)
{
    int t1, t2, t3;

    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);

    return t1/(t2*t3);
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