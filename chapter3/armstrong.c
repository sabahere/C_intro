//15:26
#include<stdio.h>
int main(void){
    int num = 100;//initialising count for 3 digit
    int counter = 0;//initialising count for first while loop
    printf("Armstrong number of 3 digit are:\n");
    while(num<=999){
        int count = 0;//initialising count for second while loop
        int sum = 0; //sum of each digit with power of three
        int number = num;
        while(count<3){//loop for calculating sum of three digit each with power of three
            int digit = number%10;
            number = number/10;
            sum = sum + (digit*digit*digit);
            count++;
        }
        if(num == sum){//checking if sum is equal to number then it's an armstrong number
            printf("%i\n", sum);
        }
        num = num+1;//increasing number by 1
        counter++;
    }
}