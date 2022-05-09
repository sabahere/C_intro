#include<stdio.h>
int main(void){
    printf("n\t factorial\n");

        long x = 1;
        for(int i = 1; i<=20; ++i){
            x = x*i;
            printf("%d\t %li\n",i , x);
        }
        
    }
