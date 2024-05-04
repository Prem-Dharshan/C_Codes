#include <stdio.h>
void main(){
        int hours;
        float pay;
        printf("Enter the # of hours worked : ");
        scanf("%d",&hours);
        printf("Enter the rate of pay : ");
        scanf("%f",&pay);
        float salary;
        if (hours>40)
                salary = hours*pay + (hours-40) * pay * 0.5;
        else
                salary = hours*pay;
        printf("The salary is Rs. %.2f.\n",salary);
}