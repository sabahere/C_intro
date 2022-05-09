#include<stdio.h>
int main(void){
    //Celcius to fahrenheit conversion
    float C;
    double F;
    for (C= 30; C<=50; C++){
        F = (float)((9*C)/5)+32;
        printf("%.0fC = %4.2fF\n", C, F);
    }
}