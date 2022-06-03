#include<stdio.h>
float calculateCharges(int hours);
int main(void){
    int hour, car;
    int hour_total = 0;
    float total_charge = 0;
    float charge;
    printf("Car\tHours\tCharge\n");
    for(car = 1; car<=3; car++){
        printf("Enter hour:");
        scanf("%d", &hour);
        printf("%i\t%i", car, hour);
        if(hour<=72 && hour>=8){
        charge = calculateCharges(hour);
        printf("\t\t%.2f\n", charge);
        hour_total += hour;
        total_charge += charge;
        }
    }
    printf("TOTAL\t%i\t%.2f\n", hour_total, total_charge);
}
float calculateCharges(int hours){
    float charges;
    if(hours<24 && hours>=8){ 
        charges = 25.0 + ((hours-8.0)*(5.0)) + (hours*0.50);
        return charges;
    }
    else if(hours>=24){
        charges = (50.0*(hours/24)) +((hours % 24)*5.0) + (hours*0.50);
        return charges;
    }
}