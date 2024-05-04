
#include<stdio.h>
int main()

{

        int a,b,c,t;
        printf("Enter your maths marks:\n");
        scanf("%d",&a);

        printf("Enter your physics marks:\n");
        scanf("%d",&b);

        printf("Enter your chemistry marks:\n");
        scanf("%d",&c);

        t=(a+b+c)/3;

        if(t>=80)
        {
        printf("\nYou are eligible to apply\n");
        }
        else
        {
        printf("\nYou are not eligible to apply\n");
        }
}