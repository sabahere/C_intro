#include<stdio.h>

int gcd(int x, int y);

int main(){
    printf("Enter two integer: ");
    int x, y;
    scanf("%d%d", &x, &y);
    printf("Greatest common divisor of %d and %d = %d\n", x , y, gcd(x,y));
}

int gcd(int x, int y){
    if(y == 0){
        return x;
    }
    else{
        return gcd(y, x % y);
    }
}