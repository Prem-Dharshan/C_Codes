#include<stdio.h>
int main()
{
        int a,b;
        printf("\nEnter the number a:");
        scanf("%d",&a);
        printf("\nEnter the number b:");
        scanf("%d",&b);
        if(a>b)
        {
        printf("\n%d is the largest number",a);
        }
        else
        {
        if(a==b)
        {
        printf("\nThe numbers are equal");
        }
        }
}