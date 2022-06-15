#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enumeration constatnt for representing game status
enum Status {CONTINUE, WON, LOST};

//function prototype
int rollDice();

int main(void){

    srand(time(NULL));

    int myPoint;
    enum Status gameStatus;
    int sum = rollDice(); //first roll

    switch(sum){

        //win on first roll
        case 7:
        case 11:
        gameStatus = WON;
        break;

        //loose on first roll
        case 2:
        case 3:
        case 12:
        gameStatus = LOST;
        break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break;
    }

    //while game not complete
    while(gameStatus == CONTINUE){
        sum = rollDice();

        if(myPoint == sum){
            gameStatus = WON;
        }
        else if(myPoint == 7){
            gameStatus = LOST; 
        }
    }

    //printing if player win or lose
    if(gameStatus == WON){
        printf("HURRAY! You win\n");
    }
    else{
        printf("Too bad. You lost.\n");
    }

}

//function for roling dice
int rollDice(){

    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("%d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}


