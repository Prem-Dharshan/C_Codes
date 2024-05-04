
#include<stdio.h>
int main()
{
        int a,b;
        printf("\nThe values of a and b before swapping is:\n");
        scanf("%d %d",&a,&b);
        a=a^b;
        b=a^b;
        a=a^b;
        printf("\nThe values of a and b after swapping is:%d,%d\n",a,b);
}