#include<stdio.h>
#include <math.h>
int main(void){
    double principal, rate, amount;
    printf("years\tamount\n\t5%%\t\t6%%\t\t7%%\t\t8%%\t\t9%%\t\t10%%\n");
    int year;
    principal = 1000;
    for(int i = 1; i<=10; ++i){
        printf("%i\t", i);
        for(int j = 5; j<=10; ++j){
            amount = principal *pow(1.0 + (float)j/100, i);
            printf("%.2f\t\t", amount);
        }
        printf("\n");
        
    }
    
}