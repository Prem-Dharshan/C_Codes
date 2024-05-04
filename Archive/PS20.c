
#include<stdio.h>
int main()
{
        int a,b,s,u,t;
        printf("\nEnter the time when you started to work:");
        scanf("%d",&a);

        printf("\nEnter the time you finihsed work:");
        scanf("%d",&b);

        t=(b-a);
        s=(t*150);
        u=(t*150+100);

        if(t<=9)
        {
        printf("\nThe payment is %d",s);
        }
        else
        {
        printf("\nThe payment is %d",u);
        }
}