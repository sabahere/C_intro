#include<stdio.h>
int main(void){
    int x, y;
     printf("Enter a number:");
     scanf("%d", &x);
     y = 2;
     while(y<=x){
     
     if(x%y==0){
         if(x==y){
         printf("It's a prime number.\n");
         }
         else{
             printf("It's a composite number.\n");
         }
        break;
     }
     y++;
     }
     
     
     

}