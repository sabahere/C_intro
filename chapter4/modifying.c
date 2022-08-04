#include<stdio.h>
int main(void){
    for(int x=1; x<10; x++){
        for(int i = 4; i>=x; i--){
            printf(" ");
            if(x==5){
                break;
            }
        }
        for(int j=1; j<x*2; j++){
                
                if(x> 10/2){
                    j--;
                }
                    printf("*");
            }
            printf("\n");
        }    

}
