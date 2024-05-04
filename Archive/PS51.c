
#include<stdio.h>
#include<math.h>
int main()
{
        int temp,speed;
        double wind_chill;
        printf("\nEnter the temperature:\n");
        scanf("%d",&temp);
        printf("\nEnter the wind speed:\n");
        scanf("%d",&speed);
        wind_chill=(35.74+(0.6215*temp)+(0.4275*temp-35.75)*speed)*pow(0.16, 2);
        printf("\nThe result is %f\n",wind_chill);
}