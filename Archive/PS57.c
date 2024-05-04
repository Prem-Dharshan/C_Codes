
#include<stdio.h>
#include<math.h>
int main()
{
        double x,r;

        printf("\nEnter the value of x:\n");
        scanf("%lf",&x);

        if(x!=0.0)
        {
        r=sin(1/x);
        printf("\nResult is %0.4lf\n",r);
        }
        else
        {
        printf("\nValue of x cannot be zero\n");
        }
        return 0;
}