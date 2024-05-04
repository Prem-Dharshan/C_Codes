
#include<stdio.h>
int main()
{
        int m,n,s,g,h;

        printf("\nEnter value of m:\n");
        scanf("%d",&m);

        printf("\nEnter value of n:\n");
        scanf("%d",&n);

        s=(m*m)-(n*n);

        g=(2*m*n);

        h=(m*m)+(n*n);

        printf("\nSide1=%d",s);
        printf("\nSide2=%d",g);
        printf("\nHypotenuse=%d",h);

        return 0;
}