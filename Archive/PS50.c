
#include<stdio.h>
int main()
{
        int a,b,x,p;
        printf("\nEnter the value of a:\n");
        scanf("\%d",&a);
        printf("\nEnter the value of b:\n");
        scanf("%d",&b);
        printf("\nEnter the value of x:\n");
        scanf("%d",&x);
        p=(a*x+b)/(a*x-b);
        printf("\nThe product is %d\n",p);
        return 0;
}