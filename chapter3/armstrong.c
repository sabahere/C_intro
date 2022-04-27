#include<stdio.h>
int main(void){
    long number;
    printf("Enter any number within 10 digit:");
    scanf("%li", &number);
        long num = number;
        long nos = num;
        int counter = 1;
        int digits = 0;
        while(number>=1){// loop for calculating number of digits
            int x = number%10;
            number = number/10;
            digits++;
            counter++;
        }
        int count = 0;//initialising count
        long sum = 0; //sum of each digit with power of three
        while(count<=digits){//loop for calculating armstrong number
            int digit = nos%10;
            nos = nos/10;
            int counting = 1;
            long power = 1;
            while(counting<=digits){//loop for calculating power of each digit
                power = power*digit;
                counting++;
            }
            sum = sum+power;// adding each digit with power of the total no. of digits 
            count++;
        }
        if(num == sum){//checking if sum is equal to number then it's an armstrong number
            printf("This is an armstrong number.\n");
        }
        else{
            printf("This is not an armstrong number.\n");
        }
}