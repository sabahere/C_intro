#include<stdio.h>

const char TRUE = 1;
const char FALSE = 0;

int isPerfect(int a);//function prototype
void printFactors(int a);

int main(){
    printf("Perfect number\n");
    for(int i = 1; i<=100000; i++){
        if(isPerfect(i) == TRUE){
            printf("%i\t", i);
            printFactors(i);
        }
    }
}

int isPerfect(int a){
    int sum = 0;
    for(int j = 1; j<a; j++){
        if(a % j == 0){
            sum += j;
        }
    }
    if(sum == a){
        return TRUE;
    }
    return FALSE;
}

void printFactors(int a){
    for(int j = 1; j<a; j++){
        if(a % j == 0){
            printf("%i, ", j);
        }
    }
    printf("\n");
}