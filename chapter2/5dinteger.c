#include <stdio.h>

int main(void){
    int num;
    printf("Enter one five-dgit number:");//prompt user for one 5-digit number
    scanf("%d", &num);
    int a = num/10; //dividing by 10 and storing 4 digit in a
    int b = a/10;//storing 3 digit in b
    int c = b/ 10; //storing 2 digit in c
    int digit5 = num % 10; //last digit
    int digit4 = a % 10; // second last or 4th digit
    int digit3 = b % 10; //third digit
    int digit2 = c % 10; //second digit
    int digit1 = c/ 10; //first digit
    printf("%i   %i   %i   %i   %i\n", digit1, digit2, digit3, digit4, digit5);
}