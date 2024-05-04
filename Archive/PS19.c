#include<stdio.h>
int main()
{
        int o,l,a,b;

        printf("\nEnter the amount of oranges that you wish to  buy:\n");
        scanf("%d",&o);

        printf("\nEnter the amount of lemons that you wish to buy:\n");
        scanf("%d",&l);

        a=(o*3);
        b=(l*5);

        printf("\nTotal cost of the oranges is %d\n",a);
        printf("\nTotal cosst of the lemons is %d\n",b);
        return 0;
}