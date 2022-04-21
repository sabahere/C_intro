#include <stdio.h>
int main(void){
    int accountNum, mortAmount, mortgageTerm, totalInterest, totalAmount, monthly; //intialising variable
    float interestRate; //interest must be entered in decimal
    int counter = 0; //counting loop
    printf("Enter amount number(-1 to quit):");//prompt user for account number
    scanf("%d", &accountNum); 
    while(accountNum !=-1){
        printf("Enter mortgage amount(in dollars):"); //prompt user for mortage amount in dollars
        scanf("%d", &mortAmount);
        printf("Enter morgage term(in years):"); //prompt user for mortgage term in years
        scanf("%d", &mortgageTerm);
        printf("Enter interest rate(as a decimal):");//prompt user for interest rate in decimal.
        scanf("%f", &interestRate);
        totalInterest = (float)interestRate* mortAmount* mortgageTerm;//calculation of total interest payable
        totalAmount = mortAmount + totalInterest; //getting total amount payable
        monthly = totalAmount/(mortgageTerm* 12);//calculating monthly payable interest
        printf("The monthly payable interest is: $ %d\n\n", monthly);// printing monthly payable interest
        counter++; //cpunting loop
        printf("Enter amount number(-1 to quit):");//prompt user for account number
        scanf("%d", &accountNum); 
    }

}