#include<stdio.h>
#include<math.h>

int main(void){
    float x;
    int y;
    printf("Enter an integer:");
    scanf("%f", &x);
    y = ceil(x);
    printf("Number : %.2f\nRounded : %i\n", x, y);
    }