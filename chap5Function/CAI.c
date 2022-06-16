#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int multiply(int a);

enum Level{ONE, TWO};

int main(){

    srand(time(NULL));

    int rightAnswer, wrongAnswer;
    enum Level levelStatus;
    levelStatus = ONE;

    //start questioning student
    while(1){

        int sum_right = 0;// adding the number of times student entered right answer
        int count = 0;
        int multiple;

        while(count<10)
        {
            if(levelStatus == ONE)
            {
                multiple = multiply(1);
            }
            else if(levelStatus == TWO)
            {
                multiple = multiply(2);
            }

            int answer;
            scanf("%d", &answer);

            //if student's answer is right
            if(answer == multiple)
            {
                rightAnswer = 1 + (rand() % 4);
                sum_right++;
                count++;
            }

            //if answer is wrong
            else
            {
                while(answer != multiple)
                {
                    wrongAnswer = 1 + (rand() % 4);
                    count++;

                    //printing different statement for wrong answer
                    switch(wrongAnswer)
                    {
                        case 1:
                        printf("No. Please try again.\n");
                        break;

                        case 2:
                        printf("Wrong. Try once more.\n");
                        break;

                        case 3:
                        printf("Don't give up!\n");
                        break;

                        case 4:
                        printf("No. Keep trying.\n");
                        break;
                    }
                    scanf("%d", &answer);
                }

                //after trying wrong answer if student entered the right answer
                if(answer == multiple)
                {
                    rightAnswer = 1 + (rand() % 4);
                    sum_right++;
                    count++;
                }
            }

            //printing different statement for right answer
            switch(rightAnswer)
            {
                case 1:
                printf("Very good!\n");
                break;

                case 2:
                printf("Excellent!\n");
                break;

                case 3:
                printf("Nice work!\n");
                break;

                case 4:
                printf("Keep up the good work.\n");
                break;

            }
        }

        //calculating the percentage of student
        if((sum_right*100)/10 < 75)
        {
            printf("Please ask your teacher for extra help.\n");
            levelStatus = ONE;
        }
        else
        {
            printf("Congragulations! You are ready to go the next level.\n");
            levelStatus = TWO;

        }
    }

}

//function for asking questions
int multiply(int a)
{
    if(a == 1)
    {
        int a1 = rand() % 10;
        int b1 = rand() % 10;

        printf("How much is %d times %d? ", a1, b1);
    
        return a1*b1;
    }

    else if(a == 2)
    {
        int a2 = 8 + (rand() % 99);
        int b2 = 8 + (rand() % 99);

        printf("How much is %d times %d", a2, b2);

        return a2*b2;
    }
}