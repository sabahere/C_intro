#include<stdio.h>
int main(void){
    //Celcius to fahrenheit conversion
    int C;
    double F;
    for (C= 30; C<=50; C++){
        F =((9*(float)C)/5)+32;
        printf("%dC = %4.2fF\n", C, F);
    }
}