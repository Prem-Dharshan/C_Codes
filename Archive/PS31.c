
#include <stdio.h>
void main(){
        int start,end;
        printf("Enter the starting time : ");
        scanf("%d",&start);
        printf("Enter the end time : ");
        scanf("%d",&end);
        int pay;
        if (start<8 || end >17){ /*overtime*/
                if (start<8 && end <=17){
                        pay = (end-8)*150 + (8-start)*100 ;
                }
                else if (start>=8 && end>17){
                        pay = (17-start) * 150 + (end-17)*100;
                }
                else if (start <8 && end>17){
                        pay = (17-8)*150 + (8-start)*100 + (end-17)*100;
                }
        }
        else{
                pay = (end - start)*150;
        }
        printf("The pay for working from %d to %d is %d.\n",start,end,pay);
}