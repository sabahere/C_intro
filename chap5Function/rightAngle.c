#include<stdio.h>
int rightAngle(int a, int b, int c);
int main(void){
    printf("Enter three sides of a right angle triangle:");//prompting user for three sides of a right angle triangle
    int side1, side2, side3;
    scanf("%d%d%d", &side1, &side2, &side3);
    //print if it's a right angle triangle
    if(rightAngle(side1, side2, side3) == 1){
        printf("It's a right-angled triangle.\n");
    }
    else{
        printf("It's not a right-angled triangle.\n");
    }
}
//function for checking a right angled triangle
int rightAngle(int a, int b, int c){
    if(a>b && a>c){
        if(a*a == b*b + c*c){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(b>a && b>c){
        if(b*b == a*a + c*c){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(c>a && c>b){
        if(c*c == a*a + b*b){
            return 1;
        }
        else{
            return 0;
        }
    }
}