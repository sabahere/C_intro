#include <stdio.h>
int main(void){
    int a, b ,c;
    printf("Enter three different integers:"); //prompt user for three integer
    scanf("%i %i %i", &a, &b, &c);// read those integer
    if(a>b){
        if(a>c){
            printf("Largest is %i\n", a);//if largest is a
        }
    }
    if(a<b){
        if(a<c){
            printf("Smallest is %i\n", a);//if smalles is a
        }
    }
    if(b>a){
        if(b>c){
            printf("Largest is %i\n", b);// if b is largest
        }
    }
    if(b<a){
        if(b<c){
            printf("Smallest is %i\n", b);//if b is smallest
        }
    }
    if(c>a){
        if(c>b){
            printf("Largest is %i\n", c); //if c is largest
        }
    }
    if(c<a){
        if(c<b){
            printf("Smallest is %i\n", c); //if c is smallest
        }
    }
}