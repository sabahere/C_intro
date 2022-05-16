#include<stdio.h>
int main(void){
    //TARGET HEART RATE CALCULATOR
    int birthdate, currentday, max, target;
    printf("Enter your birth date:(DDMMYYYY)");
    scanf("%i", &birthdate);
    printf("Enter current date(DDMMYYYY):");
    scanf("%i", &currentday);
    int age =(currentday % 1000) - (birthdate % 1000);//calculating age
    max = 220-age;//maximun heart rate
    float percentage = ((float)50/100)*max;
    float percentage1 = ((float)85/100)*max;
    printf("Your age : %i\n", age);
    printf("Maximum heart rate : %d\n", max);
    printf("Target heart rate range (50%%-85%%) : %.1f-%.1f\n",percentage, percentage1 );
}