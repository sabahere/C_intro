#include <stdio.h>
int main(void){
    int highest, current;
    printf("highest rainfall:");
    scanf("%i", &highest);
    printf("current rainfall:");
    scanf("%i", &current);
                                                                                                                 
    if(highest < current){
        printf("Highest rainfall ever.\n");
    }
    if(highest>current){
        printf("This is not the highest rainfall. \n");
    }
}