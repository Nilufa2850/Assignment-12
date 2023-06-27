// Write a recursive function to print first N odd natural numbers

#include<stdio.h>
void oddN(int);

void oddN(int n)
{
        if(n>0)
        {
                oddN(n-1);
                printf(" %d",2*n-1);
        }
}

int main()
{
        int m ;
        printf("Enter terms : ");
        scanf("%d",&m);

        oddN(m);
        return 0 ;
}
