
#include<stdio.h>
#include<math.h>
int main()
{
        int x,y,log;
        float p;
        printf("\nValue of x:\n");
        scanf("%d",&x);
        printf("\nValue of y:\n");
        scanf("%d",&y);
        p=(2.5*log*x)+(0.848)+(x*x-y-y)+(sqrt(2*x*y));
        printf("\nThe result is %f\n",p);
}