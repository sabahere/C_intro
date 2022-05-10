#include<stdio.h>
int main(void){
    printf("(%i)\n", 65 );
    for(int i = 0; i<10; ++i){
        for(int j = 1; j<=i; ++j){
            printf("*");
        }
        printf("\n");
    }
    printf("%s\n", "(B)");
    for(int k = 1; k<=10; ++k){
        for(int l=10; l>=k; --l){
            printf("*");
        }
        printf("\n");
    }
    printf("(C)\n");
    for(int m = 0; m<10; ++m){
        for(int n = 0; n<m; ++n){
            printf(" ");
        }
        for(int p = 10; p>m; --p){
            printf("*");
        }
        printf("\n");
    }
    printf("(D)\n");
    for(int q = 0; q<10; ++q){
        for(int r = 9; r>q; --r){
            printf(" ");
        }
        for(int s = 0; s<=q; ++s){
            printf("*");
        }
        printf("\n");
    }
}
