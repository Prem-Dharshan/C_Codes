
#include<stdio.h>
int main(void)
{
        int protein,carbs,fat,tot_cal;

        printf("\nHow many grams of calorie are in your food?\n");
        scanf("%d",&protein);

        printf("\nHow many grams of carbs are in your food?\n");
        scanf("%d",&carbs);

        printf("\nHow many grams of fat are in your food?\n");
        scanf("%d",&fat);

        tot_cal=(protein+carbs+fat);

        printf("\nThere are %d calories in your food\n",tot_cal);

        return 0;
}