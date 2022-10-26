#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 13

int main(void){

    srand(time(NULL));//seed random number generator

    unsigned int frequency[SIZE] = {0};//count the no. of time sum of dice appear

    for(size_t i = 0; i < 36000; i++)\
    {
        int face1 = 1 + (rand() % 6);
        int face2 = 1 + (rand() % 6);
        int sum = face1 + face2;
        frequency[sum]++;
    }

    printf("%s %8s\n", "Face", "Frequency");

    unsigned int totalResponse = 0;

    for(int j = 2; j <= 12; j++)
    {
        printf("%4d %8d\n", j, frequency[j]);
        totalResponse += frequency[j];
    }

    printf("TOtal response = %d\n", totalResponse);
}