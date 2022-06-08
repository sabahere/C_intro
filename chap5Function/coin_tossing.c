#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char flip();

int main(void){
    srand(time(NULL));
    int total_heads = 0;
    int total_tails = 0;
    for (int i = 1; i <= 100; i++){
        int x = flip();
        if(x == 1){
            total_heads++;
        }
        else if(x == 0){
            total_tails++;
        }
    }
    printf("Total heads : %d\n", total_heads);
    printf("Total tails : %d\n", total_tails);
}

//function to flip a coin
char flip(){
    
    int coin = rand() % 2;
    return coin;
}