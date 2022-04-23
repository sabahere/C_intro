#include<stdio.h>
int main(void){
    int n = 1;
    int count = 0;
    printf("N\tN2\tN3\tN4\n");
    while(n<=10){
        printf("%d\t%d\t%d\t%d\n", n, n*n, n*n*n, n*n*n*n);
        n++;
        count++;
    }
    printf("\n\n");
    int counter = 0;
    int a = 0;
    while(counter<5){
        a= a+7;
        printf("%d\t%d\t%d\t%d\n", a, a+3, a+6, a*9);
        counter++;
    }
}