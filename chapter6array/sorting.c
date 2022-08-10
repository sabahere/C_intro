#include<stdio.h>
#define SIZE 10

int main(void){
    int a[SIZE] = {5,6,89,76,6,34,76,90,56,10};
    puts("Data items in original order");

    for(size_t j = 0; j<SIZE ;j++){
        printf("%4d", a[j]);
    }

    for(unsigned int pass = 1; pass < SIZE; pass++){

        for(size_t i = 0; i<SIZE; i++){
            if(a[i] > a[i+1]){
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    puts("\nData items in ascending order");

    for(size_t k = 0; k < SIZE; k++){
        printf("%4d", a[k]);
    }
    puts("");
}