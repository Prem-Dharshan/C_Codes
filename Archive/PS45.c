
#include<stdio.h>
int main()
{
        int n,s,u,days,sat,sun,tot_mil;
        printf("\nEnter the number of weekdays you have run:\n");
        scanf("%d",&n);

        printf("\nEnter the number of saturdays you have run:\n");
        scanf("%d",&s);

        printf("\nEnter the number of sundays you have run:\n");
        scanf("%d",&u);

        days=(n*2);
        sat=(s*5);
        sun=(u*6);

        tot_mil=(days+sat+sun);

        printf("\nTotal number of miles you have run:%d miles\n",tot_mil);

        return 0;
}