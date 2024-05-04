
#include<stdio.h>
int main()
{
        int a,b,points,g;

        printf("\nEnter the number of goals scored by home team:\n");
        scanf("%d",&a);

        printf("\nEnter the number of goals scored by  away team:\n");
        scanf("%d",&b);

        points=(a*3);

        if(a>b)
        {
        printf("\nThe points earned by the home team is %d\n",points);
        }
        else
        {
        if(a==b)
        {
        g=(a*3+1);
        printf("\nThe points earned by the home team is %d\n",g);
        }
        }
        return 0;
}