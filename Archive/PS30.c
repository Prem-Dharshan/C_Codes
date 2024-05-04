
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
        int d,m,y;
        printf("Enter the date (dd mm yyyy) : ");
        scanf("%d %d %d",&d,&m,&y);
        if (d<=0 || m<=0 || y<=0 || m>12 || d>31 || (d>30 && (m==9 || m==4 || m==6 || m==11) ) || (d>28 && m==2 && isLeapYear(y)==0) || (d>29 && m==2 && isLeapYear(y)==1) )
                printf("Invalid input!\n");
        else if(d<28)
                printf("The next date is %02d %02d %d.\n",d+1,m,y);
        else if(d==28 && m == 2 && isLeapYear(y)==1)
                printf("The next date is %d %02d %d.\n",d+1,m,y);
        else if(d==28 && m == 2 && isLeapYear(y)==0)
                printf("The next date is %02d %02d %d.\n",1,m+1,y);
        else if(d==29 && m==2 && isLeapYear(y)==1)
                printf("The next date is %02d %02d %d.\n",1,m+1,y);
        else if((d==28 || d==29) && m!=2)
                printf("The next date is %d %02d %d.\n",d+1,m,y);
        else if(d==30 && (m==9 || m==4 || m==6 || m==11) )
                printf("The next date is %02d %02d %d.\n",1,m+1,y);
        else if(d==30 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10) )
                printf("The next date is %02d %02d %d.\n",d+1,m,y);
        else if(d==31 && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10) )
                printf("The next date is %02d %02d %d.\n",1,m+1,y);
        else if(d==31 && m==12)
                printf("The next date is %02d %02d %d.\n",1,1,y+1);



}