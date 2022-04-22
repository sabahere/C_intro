#include<stdio.h>
int main(void){
    float straightTime, time_and_a_half, hour, hourly, x;
    int counter = 0;
    printf("Enter number of hour worked(-1 to end):");//pmpt user for number of hour worked
    scanf("%f", &hour);
    while(hour != -1){
        printf("Enter hourly rate of the worker($00.00):");//prompt user for rate of work per hour
        scanf("%f", &hourly);
        if(hour <= 40){
            straightTime = hour * hourly; //calculating salary if hour is less than or equal to 40
            printf("Salary is $%.2f\n\n", straightTime);//print straight time salary
        }
        else{
            x = hour-40;//number of hour after 40 hours
            time_and_a_half = (hour*hourly)+(0.5*x*hourly);//calulating time and a half salary
            printf("Salary is $%.2f\n\n", time_and_a_half); //print time_and_a_half salary
        }
        counter++;
        printf("Enter numberof hour worked(-1 to end):");
        scanf("%f", &hour);
        
    }
    

}