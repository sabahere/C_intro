#include<stdio.h>
#include<math.h>
int main(void){
    float pi = 4;
    for(int i = 1; i<=10000; i++){
        pi += (pow(-1, i))*(4.0/(2*i+1));
        printf("%i\t %.4f\n",i,  pi);
        if(pi==3.1415){
            printf("%d terms of series is used to get 3.1415.\n", i);
            }
    }
    
}
