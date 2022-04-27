#include<stdio.h>
int main(void){
    int count = 1;
    while(count<=8){
        int i =0;
        if(count%2 == 0){
            printf(" ");
        }
        while(i<8){
                printf("* ");
                i++;
        }
        printf("\n");
        count++;
    }
}