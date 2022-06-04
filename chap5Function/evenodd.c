#include<stdio.h>
int evenodd(int a);
int main(){
    printf("Enter 6 digit integer:");//prompting user for series of integers
    int num;
    scanf("%d", &num);
    for(int i = 0; i<6; i++){
        int a = num % 10;
        //printing if a number is even or odd
        if(evenodd(a) == 1){
            printf("%d = even number\n", a);
        }
        else{
            printf("%d = odd number\n", a);
        }
        
        num = num/10;
    }
}
//checking each integer if even or odd
int evenodd(int a){
    if(a%2 == 0){//if it's even then return 1
        return 1;
    }
    else if(a%2 !=0){//if it's odd then return 0
        return 0;
    }
}