#include <stdio.h>
int main(void){
    int num;
    printf("Enter an integer:"); //prompt user for an integer
    scanf("%d", &num);// store integer as a variable named num
    int  x = num % 2; //remainder of num /2
    if(x==0){
        printf("Number is even.\n"); //For even number
    }
    if(x==1){
        printf("Number is odd.\n"); //for odd number
    }
}