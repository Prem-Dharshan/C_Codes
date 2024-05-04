
#include<stdio.h>
int main()
{
        int a,b,c,d,e;
        printf("\nEnter value for a:");
        scanf("%d",&a);


        printf("\nEnter value for b:");
        scanf("%d",&b);

        printf("\nEnter value for c:");
        scanf("%d",&c);

        d=a+(b+c);
        e=(a+b)+c;

        printf("\nThe result of d and e is %d\n",d);
        printf("\nThe result will be the same for all values\n",e);
}