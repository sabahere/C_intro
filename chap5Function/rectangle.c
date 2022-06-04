#include<stdio.h>
char rectangle(int a, int b);
int main(void){
    printf("Enter length and breadth of a rectangle:");//prompting user for size of length and breadth of a rectangle
    int l, b;
    scanf("%d%d", &l, &b);
    rectangle(l, b);
}
char rectangle(int a, int b){
    for(int i = 1; i<=b; i++){
        for(int j = 1; j<=a; j++){
            printf("*");
        }
        printf("\n");
    }
}