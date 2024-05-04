#include <stdio.h>
void main(){
        int year,a,b,c,d,e;
        printf("Enter the year : ");
        scanf("%d",&year);
        a=year%19;
        b=year%4;
        c=year%7;
        d=(19*a+24)%30;
        e=(2*b+4*c+6*d+5)%7;
        int date=22+d+e;
        if (date<=31)
                printf("Easter day of %d is on March %d.\n",year,date);
        else
                printf("Easter day of %d is on April %d.\n",year,date%31);

}