
#include<stdio.h>
int main()
{
        int a,e,r,t;
        float s;
        printf("\nValue of a:\n");
        scanf("%d",&a);

        printf("\nValue of e:\n");
        scanf("%d",&e);

        printf("\nValue of r:\n");
        scanf("%d",&r);

        printf("\nValue of t:\n");
        scanf("%d",&t);

        s=(a*e)/(r*t);

        printf("\nResult is %f:\n",s);
}