#include<stdio.h>

unsigned long int fib(int a);

int main(void){
    printf("Enter an integer: ");
    int a;
    scanf("%d", &a);
    printf("fibonacci(%d) = %lu\n", a, fib(a));
}

unsigned long int fib(int a){

    if(a == 0 || a == 1){
        return a;
    }
    else {
        unsigned long int a1, a2, sum;
        a1 = 0;
        a2 = 1;
        sum = 0;
        for(int i = 2; i <= a; i++){
            sum = a1 + a2;
            a1 = a2;
            a2 = sum;   
        }
        return sum;
    }
}