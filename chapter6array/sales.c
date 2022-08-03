#include<stdio.h>

#define PEOPLE 20

int main(void){
    int sales[PEOPLE]; //initialising array for storing gross sale amount of people
    printf("Enter gross sales(of whole week) of 20 people: ");
    for(int k = 0; k < PEOPLE; k++){
        scanf(" %d", &sales[k]);
    }

    int salary[PEOPLE] = {0};// initialising array for weekly salary
    for(int j = 0; j<PEOPLE; j++){
        salary [j] += ((sales[j]*9)/100 + 500);
    }

    int range[9] = {0};
    for(int i = 0; i < PEOPLE; i++){
        if(salary[i]>199 && salary[i]<300){
            range[0]++;
        }
        else if(salary[i]>299 && salary[i]<400){
            range[1]++;
        }
        else if(salary[i]>399 && salary[i]<500){
            range[2]++;
        }
        else if(salary[i]>499 && salary[i]<600){
            range[3]++;
        }
        else if(salary[i]>599 && salary[i]<700){
            range[4]++;
        }
        else if(salary[i]>699 && salary[i]<800){
            range[5]++;
        }
        else if(salary[i]>799 && salary[i]<900){
            range[6]++;
        }
        else if(salary[i]>899 && salary[i]<1000){
            range[7]++;
        }
        else if(salary[i]>999){
            range[8]++;
        }
    }
    printf("Sales person ranges between these salaries are:\n");
    printf("(a) $200-299 %15d\n", range[0]);
    printf("(b) $300-399 %15d\n", range[1]);
    printf("(c) $400-499 %15d\n", range[2]);
    printf("(d) $500-599 %15d\n", range[3]);
    printf("(e) $600-699 %15d\n", range[4]);
    printf("(f) $700-799 %15d\n", range[5]);
    printf("(g) $800-899 %15d\n", range[6]);
    printf("(h) $900-999 %15d\n", range[7]);
    printf("(i) $1000 and above %8d\n", range[8]);
}