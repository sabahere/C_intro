#include<stdio.h>
#include<math.h>
void digits(int a);
int main(){
    printf("Enter digit between 1 and 32767:");
    int num;
    scanf("%i", &num);
    if(num>1 && num<32767){
       digits(num);
    }
    else{
        printf("Incorrect value!\n");
    }
}
void digits(int a){
    int number = a;
    int count = 0;
    while(number !=0){
        number = number/10;
        count++;
    }
    printf("count is %i\n", count);
   for(int i = count-1; i>=0; i--){  
       int x = a;
       x = x/pow(10, i);
       int y = x%10;
       printf("%i  ", y);
   }
   printf("\n");
}