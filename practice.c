#include <stdio.h>

int main (void){
    int  a, b;
    printf("Enter value a:");
    scanf("%d", &a);
    printf("Enter value of b");
    scanf("%d", &b);

    int sum = a+b;
    int multiply = a*b;
    int div = a/b;
    int rem = a%b;
    int sub;
    if(a>b){
        sub = a-b;
    }
    else{
        sub= b-a;
    }
    printf("sum is %d\nmultiply is %d\ndivision is %d\nremainder is %d\ndifference is %d\n", sum, multiply, div, rem, sub);

}