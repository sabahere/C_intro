#include<stdio.h>
int main(void){
    long long population, growth;
    int year = 2022;
    printf("Population of 2021 is 7,794,798,739\nFor next 75 years,\n ");
    printf("Year\tPopulation\tIncrease\n\n");
    population = 7794798739;
    for(int i = 1; i <=75; i++){
        growth = (float)population*(1.05/100);
        long long currentp = (growth+population)-population;

        printf("%i\t%lli\t%lli\n",year, growth+population, currentp );
        population += growth;
        year++;
    }
}