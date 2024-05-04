
#include<stdio.h>
int main()
{
        float P,P2,T,T2,V;
        printf("\nEnter point 1:\n");
        scanf("%f",&P);
        printf("\nEnter point 2:\n");
        scanf("%f",&P2);
        printf("\nEnter time 1:\n");
        scanf("%f",&T);
        printf("\nEnter time 2:\n");
        scanf("%f",&T2);
        V=(P2-P)/(T2-T);
        printf("\nThe average velocity is %f\n",V);
}