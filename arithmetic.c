#include<stdio.h>

int main(void){
    int a, b, c;
    printf("Enter three different integer:");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a+b+c;
    int average = (a+b+c)/3;
    int product = a*b*c;
    printf("Sum is %i\nAverage is %i\nProduct is %i\n", sum, average, product);
    if(a>b){
        if(a>c){
            printf("Largest is %i\n", a);
        }
    }
    if(a<b){
        if(a<c){
            printf("Smallest is %i\n", a);
        }
    }
    if(b>a){
        if(b>c){
            printf("Largest is %i", b);
        }
    }
    if(b<a){
        if(b<c){
            printf("Smallest is %i\n", b);
        }
    }
    if(c>a){
        if(c>b){
            printf("Largest is %i\n", c);
        }
    }
    if(c<a){
        if(c<b){
            printf("Smallest is %i\n", c);
        }
    }
      
}