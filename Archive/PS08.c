
#include<stdio.h>
int main()
{
        int a,b,c;

        printf("\nEnter number a:");
        scanf("%d",&a);

        printf("\nEnter number b:");
        scanf("%d",&b);

        printf("\nEnter number c:");
        scanf("%d",&c);

        if(a>b && a>c)
        printf("\nThe largest number is %d\n",a);

        if(b>a && b>c)
        printf("\nThe largest number is %d\n",b);

        if(c>a && c>b)
        printf("\nThe largest number is %d\n",c);
}