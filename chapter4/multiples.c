#include<stdio.h>
int main(void){
    //Calculating the sum of multiples
    int i, x, y;
    y = 0;
    for(i=0; i<=100; i+=7){
            printf("7 x %d = %d\n", y++,i );
    }

    printf("\n\n");
    //Prime numbers
    for(int m = 2; m<=100; ++m){
        for(int n = 2; n<=m; ++n){
            if(m%n==0){
                if(n==m){
                    printf("%d\t",n);
                }
                    break;
            }
        }
    }
    printf("\n");
}