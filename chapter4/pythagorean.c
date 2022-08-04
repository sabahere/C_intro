#include<stdio.h>
int main(void){
    int count = 0;
    for(int p = 1; p<=500; p++){
        for(int b = 1; b<=500; b++){
            
            
            for(int h = 1; h<=500; h++){
                if((p*p+b*b)==h*h){
                    printf("p: %03d b: %03d h: %03d\n", p, b, h);
                }
                count++;
            }
        }
        
    }
    printf("count : %i\n", count);
}