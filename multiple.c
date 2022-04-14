#include<stdio.h>

int main(void){
    int a, b;
    printf("Enter two integer:"); // prompt user for two number
    scanf("%d %d", &a, &b);// read the number
    if(a>b){ 
        int multiple = a%b;// if a is greater than b and remainder is 0
        if(multiple ==0){
            printf("First is a multiple of second.\n");//a is multiple to b
        }
         if(multiple !=0){
        printf("Integer is not the multiple of each other.\n");// elso not multiple
    }
    }
   
    if(b>a){
        int multiple1 = b%a;//if b is greater than a and remainder is 0
        if(multiple1 == 0){
            printf("First is a multiple of second.\n");//b is multiple to a
        }
        if(multiple1 != 0){
        printf("Integer is not the multiple of each other.\n");//else not multiple
    }
    
    }

}