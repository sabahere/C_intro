#include<stdio.h>
int main(void){
    //(a)calculate factorial
    printf("Enter a nonnegative integer:");
    int n;
    scanf("%d", &n);
    int m =n;
    int count = 1;
    int factorial = 1;
    while(count<=n){
        factorial *= count;
        count++;
    }
    printf("%d! = %d\n", m, factorial);
    //(b)estimates the value of mathematical constant e
    int x;
    printf("Enter value of x:");
    scanf("%d", &x);
    float e_value = 1;
    float ex_value = 1;
    int num = 3;
    int i = 1; //loop counting
    while(i<=num){
        float e_factorial = 1;
        int j =1;
        while(j<=i){
            e_factorial *= j;
            j++;
        }
        int power = 1;
        while(power<i){
            power *=x;
            power++;
        }
        e_value += 1/e_factorial;//calculating value of constant e
        ex_value +=(float) power/e_factorial;
        i++;
    }
    printf("value of e is %.2f\n", e_value);
    printf("Value of e^x is %.2f\n", ex_value);
}