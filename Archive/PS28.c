#include <stdio.h>

int isLeapYear(int year){
        if (year>1582){
                if (year%4==0){
                        if (year%100==0){
                                if (year%400==0)
                                        return 1;
                                else
                                        return 0;
                        }
                        else
                                return 1;
                }
        }
        else
                return 0;
}

void main(){
        int year;
        printf("Enter the year : ");
        scanf("%d",&year);
        if (isLeapYear(year))
                printf("%d is leap year.\n",year);
        else
                printf("%d is not a leap year.\n",year);


}