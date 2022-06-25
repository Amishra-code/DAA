#include<stdio.h>

int e(int x, int n)
{
    static int s=1;

    if(n==0)
        return s;
    
    else
    {
        s = (1+(x/n))*s;
        return e(x, n-1);
    }

}


int main()
{
    int x, n;
    printf("Enter value of 'x' : ");
    scanf("%d", &x);
    printf("Enter value of 'n' : ");
    scanf("%d", &n);

    printf("Sum of series is : %d", e(x,n));

    return 0;
    
}