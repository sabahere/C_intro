#include <stdio.h>
int main(void){
    int x,y,  sum;
    printf("Enter the number of value:");
    scanf("%i", &x);//prompt user for number of values to be entered
    sum = 0;
    for(int i = 0; i<x; i++){
        printf("Enter value:");//asking value for xth time
        scanf("%d", &y);
        sum += y;//caculating sum of each value
    }
    printf("Average is %d\n", sum/x);
}