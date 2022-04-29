#include<stdio.h>
int main(void){
    long present, future;
    int n;
    float rate;
    int count = 0; //initialising variable
    present = 7874965825; //current world population
    rate = 1.0;//rate of growth f current world population
    int x = 0;
    while(count<5){// calculating population of world after consecutive years
        int n = 1;
        float cal = 1;
        
        while(n<=count){
            cal *=(float) 1+(rate/100);
            n++;
        }
        future = present*cal;
        printf("World's population after %i years = %li\n", x+1, future);
        x = x+1;
        count++;
    }
}