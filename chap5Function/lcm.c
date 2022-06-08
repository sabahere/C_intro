#include<stdio.h>

int lcm(int a, int b);

int main(){
    printf("Enter two integer : ");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("The LCM is %d\n", lcm(a, b));
}

//Function for calculating lcm
int lcm(int a, int b){
    for(int i = 1; i<=a*b; i++){
        if(i % a == 0  &&  i % b == 0 && i!=1){
            return i;
            break;
        }
    }
}