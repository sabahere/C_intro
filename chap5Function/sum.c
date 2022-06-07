#include<stdio.h>

int sum(int a);//function prototype

int main(){
    printf("Enter integers: ");//prompt user for inputing integer
    int num;
    scanf("%d", &num);
    printf("Sum of all digit: %d \n", sum(num));//print the result
}

//function for adding all digits
int sum(int a){
    int add = 0;
    while(a != 0){
        int x = a%10;
        add += x;
        a = a/10;
    }
    return add;
}