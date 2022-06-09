#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("I have anumber between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess. ");
    int x ;//user guess
    scanf("%d", &x);
    int number = 1 +(rand() % 1000);
    int count = 1;
    while(1){

        if(x < number){
            printf("Too low. Try again. ");
            count++;
        }
        else if(x > number){
            printf("Too high. Try again. ");
            count++;
        }
        else{
            printf("count is %d\n", count);
            printf("Excellent! You guessed the number!\n");

            if(count<10){
                printf("Either you know the secret or you got lucky!\n");
            }
            else if(count == 10){
                printf("Ahah! You know the secret!\n");
            }
            else if(count>10){
                printf("You should be able to do better.\n");
            }

            printf("Would you like to try again (no = 0 or yes = 1) ? ");
            int again;
            scanf("%d", &again);
            
            if(again == 1){
                printf("Please guess the number. ");
                number = 1 +(rand() % 1000);
                count = 1;
            }
            else if(again == 0){
                break;
            }
        }

        scanf("%d", &x);
    }
}
