
#include <stdio.h>
#include <ctype.h>
void main(){
        int oilDensity ;
        float volume;
        printf("Enter the oil density : ");
        scanf("%d",&oilDensity);
        printf("Enter tank volume     : ");
        scanf("%f",&volume);
        char unit;
        printf("Enter the volume unit (M) for meter and (C) for centimeter : ");
        scanf("%*c%c",&unit);
        unit = toupper(unit);
        if (unit == 'C')
                volume /= 100;
        float  mass = volume * oilDensity;
        printf("The mass of the oil tank is %.2f kg.\n",mass) ;

}