#include<stdio.h>
int main(void){
    int a, b,c,d,e;
    printf("Enter 5 integer (each between 1-30 and separated with coma): ");
    scanf("%d%d%d%d%d", &a, &b, &c,&d,&e);
    for(int i = 0; i < a ;  ++i){
        printf("*");
    }
    printf("\n");
    for(int j = 0; j <b  ;  j++){
        printf("*");
    }
    printf("\n");
    for(int k = 0;  k< c ;  ++k){
        printf("*");
    }
    printf("\n");
    for(int l = 0; l < d ;  l++){
        printf("*");
    }
    printf("\n");
    for(int m = 0;  m<e  ;  m++){
        printf("*");
    }
    printf("\n");
    
}