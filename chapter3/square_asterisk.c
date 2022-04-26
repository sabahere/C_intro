#include<stdio.h>
int main(void){
    int x;
    printf("Enter positive integer (1-20):");//prompt user for an integer
    scanf("%d", &x);
    int count = 0;
    while(count<x){
        int i = 0;
        while(i<x){
            printf("*");
            i++;
        }
        printf("\n");
        count++;
    }
    printf("\n\n");
    int counting = 0;//initialise loop for hollow square
    while(counting<x){
        int j = 0;
        while(j<x){
            if(counting == 0 || counting == x-1 || j ==0 || j== x-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        counting++;
    }
    }
    