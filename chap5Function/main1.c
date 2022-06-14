#include<stdio.h>

int main(void){
    int c;

    if((c = getchar()) != EOF){
        printf("%c", c);
        main();
    }
}