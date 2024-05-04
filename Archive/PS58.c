
#include<stdio.h>
int main()
{
        int a,b;

        printf("\nEnter value of a:\n");
        scanf("%d",&a);

        printf("\nEnter value of b:\n");
        scanf("%d",&b);

        if(a>b)
        {
        printf("\nGreatest number is %d\n",a);
        }
        else
        {
        if(a==b)
        {
        printf("\nThe numbers are equal\n");
        }
        }
        return 0;
}