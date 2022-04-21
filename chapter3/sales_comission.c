#include<stdio.h>
int main(void){
    float sales, salary;
    int counter = 0;
    printf("Enter sales in dollars(-1 to end):");//prompt user to enter total sales per week in dollars
    scanf("%f", &sales);
    while(sales!=-1){
        salary = 200 + ((9*sales)/100);//calculating salary paid to salesperson per week 
        printf("Salary is: $ %.2f\n\n", salary);//print salary
        counter++;
        printf("Enter sales in dollars(-1 to end):");//prompt user for total sales per week
        scanf("%f", &sales);

    } 
}