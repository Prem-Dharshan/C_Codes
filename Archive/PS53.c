
#include<stdio.h>
int main()
{
        int a,b;
        printf("\nEnter two numbers:\n");
        scanf("%d %d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("\nNumbers after swapping:%d %d\n",a,b);
}