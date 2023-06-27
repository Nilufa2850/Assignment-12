//Write a recursive function to print first N even natural numbers.

#include<stdio.h>
void even(int);

void even(int n)
{
        if(n>0)
        {
                even(n-1);
                printf(" %d",2*n);
        }
}

int main()
{
        int m ;
        printf("Enter terms : ");
        scanf("%d",&m);

        even(m);
        return 0 ;
}
