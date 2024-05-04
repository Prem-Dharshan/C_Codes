
#include<stdio.h>
int main()
{
        int t;
        printf("\nEnter current temperature t:\n");
        scanf("%d",&t);
        if(t<85 && t>65)
        {
        printf("\nThe current temperature is %d\n",t);
        printf("\nYou can walk your dog\n");
        }
        else
        {
        if(t>65)
        {
        printf("\nThe weather is too cold to walk your dog\n",t);
        }
        else
        {
        printf("\nThe weather is too cold to walk your dog\n");
        }
        }
}