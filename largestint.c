#include <stdio.h>
int main(void){
    int a, b ,c;
    printf("Enter three different integers:");
    scanf("%i %i %i", &a, &b, &c);
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
            printf("Largest is %i\n", b);
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