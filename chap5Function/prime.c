#include<stdio.h>

int isPrime(int prime, int i);

int main(void){
    printf("Enter an integer: ");
    int a;
    scanf("%d", &a);
    if(isPrime(a, a-1) == 1){
        printf("It's a prime number.\n");
    }
    else{
        printf("It's not a prime number.\n");
    }
}

int isPrime(int prime, int i){
    if(i == 1){
        return 1;
    }
    else if(prime % i == 0){
        return 0;
    }
    else{
        return isPrime(prime, i-1);
    }
}