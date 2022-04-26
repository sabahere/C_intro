#include<stdio.h>
int main (void){
    int binary;
    printf("Enter 5 digit binary number:");
    scanf("%d", &binary);
    int count =0;//initialising loop count
    int digit;//or storing each digit of  binary
    int sum = 0;//adding
    int x=1;//power of 2
    while(count<5){//loop condition
        digit = binary%10;
        binary = binary/10;
        sum = sum + x*(digit);
        x = x*2;
        count++;
    }
    printf("Decimal equivalent of binary is %d\n", sum);

}