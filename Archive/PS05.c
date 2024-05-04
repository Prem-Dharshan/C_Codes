

#include<stdio.h>

int main()

{

        int feet,inches,length;
        printf("\nTo find the total length in inches");
        printf("\nEnter the length in feet:");
        scanf("%d",&feet);
        printf("\nEnter the length in inches:");
        scanf("%d",&inches);
        length=(feet*12)+inches;
        printf("Total length in inches is %d",length);
}