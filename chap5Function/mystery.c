#include<stdio.h>

unsigned int mystery(unsigned int a, unsigned int b);

int main(void){
    printf("Enter two positive number: ");
    unsigned int x; // first integer
    unsigned int y; // second integer
    scanf("%u%u", &x, &y);

    printf("The result is %u\n", mystery(x, y));
}

unsigned int mystery(unsigned int a, unsigned int b){
    if(b == 1){
        return a;
    }
    else{
        return a + mystery(a, b-1);
    }
}