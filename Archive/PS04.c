#include<stdio.h>

int main()

{

        int hours;
        float pay;

        printf("To display the pay for the given working hours");

        printf("\nEnter the number of working hours:");

        scanf("%d",&hours);

        pay=(390.75*hours);

        printf("Your pay is %f for working at %d hours",pay,hours);
}