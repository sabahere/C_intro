#include<stdio.h>

int power(int base, int exponent);

int main(){
    int base, exp;
    printf("Base: ");
    scanf("%d", &base);
    printf("Power: ");
    scanf("%d", &exp);
    printf("Answer : %d\n", power(base,exp));
}

int power(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    else{
        return base * power(base, exponent - 1);
    }
}