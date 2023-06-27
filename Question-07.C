//Write a recursive function to print squares of first N natural numbers.

#include<stdio.h>
void sqr(int);

void sqr(int n)
{
        if(n>0)
        {
              sqr(n-1);
              printf(" %d",n*n);
        }
}

int main()
{
        int m ;
        printf("Enter terms : ");
        scanf("%d",&m);

        sqr(m);
        return 0 ;
}
