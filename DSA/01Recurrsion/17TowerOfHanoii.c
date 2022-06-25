#include<stdio.h>

void TOH(int n, int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1, A, C, B);
        printf("From %d to %d\n", A, C);
        TOH(n-1, B, A, C);
    }

}


int main()
{
    int n, A, B, C;

    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of A : ");
    scanf("%d", &A);
    printf("Enter value of B : ");
    scanf("%d", &B);
    printf("Enter value of C : ");
    scanf("%d", &C);

    TOH(n, A, B, C);

    return 0;
    
}