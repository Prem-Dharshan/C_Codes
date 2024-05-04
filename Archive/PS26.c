
#include <stdio.h>
void main(){
        int age;
        float price;
        printf("Enter the ticket price : ");
        scanf("%f",&price);
        printf("Enter your age : ");
        scanf("%d",&age);
        if (age<12){
                price = price - (price*0.05);
        }
        printf("Your ticket price is %.2lf .\n",price);
}