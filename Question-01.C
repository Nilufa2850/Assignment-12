// Write a recursive function to print first N natural numbers.

#include<stdio.h>
void printN(int);

void printN(int n)
{
        if(n>0)
        {
                printN(n-1);
                printf(" %d",n);
        }
}

int main()
{
        int m ;
        printf("Enter terms : ");
        scanf("%d",&m);

        printN(m);
        return 0 ;
}
