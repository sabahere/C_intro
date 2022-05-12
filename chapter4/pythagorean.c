#include<stdio.h>
int main(void){
    for(int p = 1; p<=500; p++){
        for(int b = 1; b<=500; b++){
            for(int h = 1; h<=500; h++){
                if((p*p+b*b)==h*h){
                    printf("perpendicular: %d\tbase: %d\thypotenuse:%d\n", p, b, h);
                }
            }
        }
    }
}