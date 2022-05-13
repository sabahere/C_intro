#include<stdio.h>
int main(void){
    for(int i = 1; i<=5; i++){
        for(int j = 4; j>=i; j--){
            printf(" ");
        }
        for(int y = 1; y <=i; y++){
            printf("*");
            
        }
        for(int x = 1; x <=i-1; x++ ){
            printf("*");
        }
        printf("\n");
    }
    for(int l= 1;l<5; l++){
        for(int m = 1; m <= l; m++){
            printf(" ");
        }
        for(int o = 4; o>=l; o--){
            printf("*");
        }
        for(int n=3; n>l-1; n--){
            printf("*");
        }
        printf("\n");
    }
}
