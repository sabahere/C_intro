#include<stdio.h>
int main(void){
    int power = 1;
    int count = 1;
    while(count>0)
    {
        power = power*3;
        printf("%d, ",power);
        count++;
    }
}