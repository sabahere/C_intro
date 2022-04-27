#include<stdio.h>
int main(void){
    int count = 1;
    while(count<=500){
        if(count%50==0){
            printf("\n");
        }
        else{
            printf("$ ");
        }
        count++;
    }
}