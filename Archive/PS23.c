
#include <stdio.h>
void main(){
        float p1,p2;
        int t1,t2;
        printf("Enter point 1 : ");
        scanf("%f",&p1);
        printf("Enter point 2 : ");
        scanf("%f",&p2);
        printf("Enter time 1 : ");
        scanf("%d",&t1);
        printf("Enter time 2 : ");
        scanf("%d",&t2);
        if (t2-t1 !=0)
                printf("The Average Velocity is : %.3f .\n", (p2-p1)/(t2-t1) );
        else
                printf("Division by zero is invalid.\n");


}