// Write a recursive function to print reverse of a given number.

#include<stdio.h>
void reverse (int);

int main()
{
        int x ;
        printf("Enter a number : ");
        scanf("%d",&x);

        reverse(x);
        return 0 ;
}

void reverse (int x)
{
        int y ;

        if(x==0)
                return;
        
        y = x % 10 ;
        printf("%d",y);
        reverse(x/10);       
        
}
