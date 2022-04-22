#include<stdio.h>
int main(void){
    float principal, rate, days, SI;
    int counter = 0;
    printf("Enter loan principal(-1 to end):");//prompt user for principal
    scanf("%f", &principal);
    while(principal!=-1){
        printf("Enter interest rate:");//prompt user for interest rate
        scanf("%f", &rate);
        printf("Enter term of the loans in days:");//prpomot user for days
        scanf("%f", &days);
        SI = (principal*rate*days)/365;//calculating simple interest
        printf("The interest charge is $%.2f\n\n", SI);//printing simple interest
        counter++;
        printf("Enter loan principal(-1 to end):");//prpompt user for principal
        scanf("%f", &principal);
    }
    
}