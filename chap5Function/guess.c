#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("I have anumber between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess. ");
    int x ;//user guess
    scanf("%d", &x);
    int number = 1 +(rand() % 1000);//random number generation
    
    while(1){
        
        if(x < number){
            printf("Too low. Try again. ");
        }
        else if(x > number){
            printf("Too high. Try again. ");
        }
        else{
            printf("Excellent! You guessed the number!\n");
            printf("Would you like to try again (no = 0 or yes = 1) ? ");
            int again;
            scanf("%d", &again);
            if(again == 1){
                printf("Please guess the number. ");
                number = 1 +(rand() % 1000);
            }
            else if(again == 0){
                break;
            }
        }
        scanf("%d", &x);
    }
}
