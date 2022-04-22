#include<stdio.h>
int main(void){
    double collection, sales, countryTax, stateTax, saletax;
    printf("Enter total amount collected(-1 to quit):");
    scanf("%lf", &collection);
    int counter = 0;
    while(collection!=-1){
        sales = (collection*100)/109;
        countryTax = (5*sales)/100;
        stateTax = (4*sales)/100;
        saletax = countryTax + stateTax;
        char month;
        printf("Enter name of month:");
        scanf("%s",&month );
        printf("Total Collectiions:$ %.2lf\n", collection);
        printf("Sales:$ %.2lf\n", sales);
        printf("Country sales tax:$ %.2lf\n", countryTax);
        printf("State sales tax:$ %.2lf\n", stateTax);
        printf("Total sale tax collected:$ %.2lf\n\n", saletax);
        counter ++;
        printf("Enter total amount collected(-1 to quit):");
        scanf("%lf", &collection);
    }
}