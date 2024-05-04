
#include<stdio.h>
int main()
{
        int exam,quiz;
        float average;

        printf("\nEnter your exam score percentage out of 60%  :");
        scanf("%d",&exam);

        printf("\nEnter your quiz score percentage 40%         :");
        scanf("%d",&quiz);

        average=(exam+quiz)/2;

        printf("\nYour average score is %f",average);
}