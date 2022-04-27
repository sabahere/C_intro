#include<stdio.h>
int main(void){
    int nine;
    printf("Enter 5 digit integer:");
    scanf("%d", &nine);
    int number = nine;
    int count =0;
    int sum = 0;
    while(nine>=1){
        int digit = nine%10;
        nine = nine/10;
        if(digit == 9){
            sum = sum+1;
        }
        count++;
    }
    printf("There are %d digits which is 9.\n", sum);
    printf("no. of 9s is %d\n", number/9);
}