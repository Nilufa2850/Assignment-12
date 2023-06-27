// Write a recursive function to print first N natural numbers in reverse order.

#include<stdio.h>
void printN(int);

void printN(int n)
{
        if(n>0)
        {
                printf("%d ",n);
                printN(n-1);
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
