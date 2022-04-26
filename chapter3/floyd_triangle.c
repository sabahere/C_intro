#include<stdio.h>
int main(void){
    int count = 0;
    int x = 0;
    while(count<10){
        int i =0;
        while(i<=count){
            x = x+1;
            printf("%d ", x);
            i++;
        }
        printf("\n");
        count++;
    }
}