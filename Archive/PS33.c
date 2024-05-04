#include <stdio.h>
void main(){
        int inp,mile,furlong,yard,feet,cp;
        printf("Enter the distance in inches : ");
        scanf("%d",&inp);
        cp=inp;
        mile = inp/63360;
        inp%= 63360;
        furlong = inp/7920;
        inp%=7920;
        yard = inp/36;
        inp %=36;
        feet = inp/12;
        inp%=12;
        if (cp == (((8*mile + furlong)* 220 + yard)* 3 + feet)* 12 + inp )
                printf("%d inches is equal to %d miles %d furlongs %d yards %d foot and %d inches.\n",cp,mile,furlong,yard,feet,inp);



}