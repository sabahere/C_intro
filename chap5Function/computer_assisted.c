#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int differentMath(int a, int math);

enum Level{ONE, TWO, THREE, FOUR, FIVE};

int main(){

    srand(time(NULL));

    int rightAnswer, wrongAnswer;
    enum Level levelStatus;
    levelStatus = ONE;

    printf("Choose the exercise :\n1 - Arithmetic\n2 - Substraction\n3 - Multiplication\n4 - Random mixture of all of the above\n");
    int pickTopic;
    scanf("%d", &pickTopic);

    //start questioning student
    while(pickTopic != -1){

        int sum_right = 0;// adding the number of times student entered right answer
        int count = 0;
        int user_answer;

        while(count<10)
        {
            switch(levelStatus)
            {
                case 0:
                user_answer = differentMath(1, pickTopic);
                break;

                case 1:
                user_answer = differentMath(2, pickTopic);
                break;

                case 2:
                user_answer = differentMath(3, pickTopic);
                break;

                case 3:
                user_answer = differentMath(4, pickTopic);
                break;

                case 4:
                user_answer = differentMath(5, pickTopic);
                break;

            }

            int answer;
            scanf("%d", &answer);

            //if student's answer is right
            if(answer == user_answer)
            {
                rightAnswer = 1 + (rand() % 4);
                sum_right++;
                count++;
            }

            //if answer is wrong
            else
            {
                while(answer != user_answer)
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
                if(answer == user_answer)
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
        int counting = 0;

        //calculating the percentage of student
        if((sum_right*100)/10 < 75)
        {
            printf("Please ask your teacher for extra help.\n");
            levelStatus = ONE;
        }
        else
        {
            printf("Congragulations! You are ready to go the next level.\n");
            counting++;
        }

        //deciding the level 
        switch(counting)
        {
            case 1:
            levelStatus = TWO;
            break;

            case 2:
            levelStatus = THREE;
            break;

            case 3:
            levelStatus = FOUR;
            break;

            case 4:
            levelStatus = FIVE;
            break;

            case 5:
            printf("Choose the exercise :\n1 - Arithmetic\n2 - Substraction\n3 - Multiplication\n4 - Random mixture of all of the above\nEnter -1 to end\n");
            int pickTopic;
            scanf("%d", &pickTopic);
            break;
        }

    }
}

//function for asking questions
int differentMath(int a, int math)
{
    int num = 10;
    int random = 1 + (rand() % 3);

    for(int i = 1; i<=5; i++)
    {
        int a1 = (rand() % num);
        int b1 = (rand() % num);
        num *= 10;

        if(a == i)
        {
            //questions for different selected topic
            switch(math)
            {
            case 1:
            printf("What is the sum of %d and %d? ", a1, b1);
            return a1 + b1;
            break;

            case 2:
            if(a1>b1)
            {
                printf("%d less than %d? ", b1, a1);
                return a1 - b1;
            }
            else
            {
                printf("%d less than %d? ", a1, b1);
                return b1 - a1;
            }
            break;

            case 3:
            printf("How much is %d times %d? ", a1, b1);
            return a1*b1;
            break;

            case 4:
            switch(random)
                {
                    case 1:
                    printf("What is the sum of %d and %d? ", a1, b1);
                    return a1 + b1;
                    break;

                    case 2:
                    if(a1>b1)
                    {
                        printf("%d less than %d? ", b1, a1);
                        return a1 - b1;
                    }
                    else
                    {
                        printf("%d less than %d? ", a1, b1);
                        return b1 - a1;
                    }
                    break;

                    case 3:
                    printf("How much is %d times %d? ", a1, b1);
                    return a1*b1;
                    break;
                }
            break;
            }        
        }
    }
}
