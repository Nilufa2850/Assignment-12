//Write a recursive function to print first N even natural numbers in reverse order.

#include<stdio.h>
void even(int);

void even(int n)
{
        if(n>0)
        {
                printf("%d ",2*n);
                even(n-1);
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
