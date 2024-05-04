
#include <stdio.h>
#include <math.h>
void main(){
        int arr[10],count=0,sum=0;
        float rms=0;
        printf("Enter numbers from 1 to 9.Enter 0 to find the sum,average and rms value.\n");
        while (count<=10){
                int temp;
                scanf("%d",&temp);
                if ( (temp>0) && (temp<=9 )){
                        arr[count]=temp;
                        sum += temp;
                        rms += pow(temp,2);
                        count ++;
                }
                else if (temp == 0 || count >=10)
                        break;
        }
        printf("Sum = %d\nAverage=%.2f\nRMS=%f\n", sum, ( (float)sum/count ) , sqrt(rms/count) );


}