#include<stdio.h>
int main(void){
    double account, credit, current;
    for(int x = 1; x <=3; ++x){
        printf("Enter account number: ");
        scanf("%lf", &account);
        printf("Enter credit limit befe recession: $");
        scanf("%lf", &credit);
        printf("Enter current balance:$");
        scanf("%lf", &current);
        double y = credit/2;
        printf("New credit limits: $%.2f\n", y);
        if(current>credit){
            double z = current-credit;
            printf("You have exceeded $%.2f of credit limits.\n\n", z);
        }
        }
}