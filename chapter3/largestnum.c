#include<stdio.h>
int main(void){
    int largest, count;
    long number;
    printf("Enter 10 digit positive integer:");
    scanf("%ld", &number);
    count = 0;
    largest = -1;
while(count<10){// run loop 10 times
    if(number%10 > largest){
        largest = number%10;
        number = number/10;
    }
    else{
        number = number/10;
    }
    count++;
}
printf("Largest is %d\n", largest);
}