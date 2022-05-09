#include<stdio.h>
int main(void){
    int num, sum, sum_square, sum_cube;
    //prompting user for an integer
    printf("Enter an integer:");
    scanf("%d", &num);
    sum = 0;
    sum_square = 0;
    sum_cube = 0;
    for(int i = 1; i<=num; ++i){
        sum += i;//calculating sum
        sum_square += i*i;//calculating sum of square
        sum_cube += i*i*i;//calculating sum of cube
    }
    printf("Sum of all integer is %d\n", sum);
    printf("Sum of square of all integer is %d\n", sum_square);
    printf("Sum of cube of all integer is %d\n", sum_cube);
}