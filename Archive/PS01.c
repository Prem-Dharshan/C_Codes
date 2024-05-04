#include<stdio.h>

int main()

{
        float price,revenue;

        int quantity;

        printf("To determine the total revenue\n");

        printf("\nEnter the price:");

        scanf("%f",&price);

        printf("\nEnter the quantity:");

        scanf("%d",&quantity);

        revenue = price*quantity;

        printf("\nThe total revenue is %f", revenue);

}
