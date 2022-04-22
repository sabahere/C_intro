#include <stdio.h>
int main(void){
    int x,y;
    printf("Enter value of x:");
    scanf("%d", &x);
    printf("Enter value of y:");
    scanf("%d", &y);
    //difference between preincrementing and postincrementing
    printf("Value of x(while preincrementing): %d\n", ++x);
    printf("Value of x(after ++x): %d\n\n", x);

    printf("Value of y(while postincrementing): %d\n", y++);
    printf("Value of y(after y++: %d\n",y);
}