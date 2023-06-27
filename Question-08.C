//Write a recursive function to print binary of a given decimal number.

#include<stdio.h>
void binary(int);

void binary (int n)
{
        if(n==1)
                printf("1");
        else
        {
                binary(n/2);
                printf("%d",n%2);
        }
}

int main()
{
        int m ;
        printf("Enter terms : ");
        scanf("%d",&m);

        binary(m);
        return 0 ;
}
