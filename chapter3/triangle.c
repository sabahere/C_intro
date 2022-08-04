#include<stdio.h>
int main(void){
    int x, y, z;
    printf("Enter 3 sides of a tiangle:");
    scanf("%d%d%d", &x, &y, &z);
    if(x*x == y*y+z*z || y*y == x*x+z*z || z*z == y*y+x*x){
        printf("It's a triangle.\n");
    }
    else{
        printf("It's not a triangle\n");
    }
}