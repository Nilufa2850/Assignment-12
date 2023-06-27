//Write a recursive function to print octal of a given decimal number.

#include<stdio.h>
void octal(int);

void octal (int n)
{
        if(n==1)
                printf("1");
        else
        {
                octal(n/8);
                printf("%d",n%8);
        }
}

int main()
{
        int m ;
        printf("Enter a decimal number : ");
        scanf("%d",&m);

        octal(m);
        return 0 ;
}
