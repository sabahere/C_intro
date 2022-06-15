#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//enumeration constatnt for representing game status
enum Status {CONTINUE, WON, LOST};

int wager();
int rollDice();

//bank balance of player
int bankBalance = 1000;

int main(void){

    srand(time(NULL));
 
    int myPoint;
    enum Status gameStatus;
    int add1 = 0; //counting how many times player loses
    int add2 = 0; //counting how many times player wins

    while(1){
    
    int bet = wager();
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
            
            printf("HURRAY! You won\n");

            bankBalance += bet;
            printf("Bank balance = $%d\n", bankBalance);

            //just creating some chatter
            add2++;
            if(add2 == 2 || add2 == 5 || add2 == 7){
            printf("You're up big. Now's the time to cash in your chips.\n");
            }

        }
        else{
            
            printf("You lose.\n");

            bankBalance -= bet;
            printf("Bank Balance = $%d\n", bankBalance);
            printf("Sorry. You Busted.\n");

            //just creating some chatter
            add1++;
            if(add1 == 2 || add1 == 5 || add1 == 7){
            printf("Aw! cmon, take a chance!\n");

            }
        }

        //ask the user if they wanna play again
        printf("Do you wanna play again(y or n)? ");
        char again;
        scanf(" %c", &again);

        if(again == 'y'){
           continue;
        }
        else if(again == 'n'){
            break;
        }

    }

}

//function for roling dice
int rollDice(){

    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("%d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;
}

//function for prompting user for wager
int wager(){

    printf("Enter a wager: ");
    int n;
    scanf("%d", &n);

    while(n > bankBalance){

        printf("Enter a wager: ");
        scanf("%d", &n);

    }
    return n;
}