#include<stdio.h>
#include<cs50.h>
int main(void){
int n = get_int("Enter an integer(1-10):");
for(int i = 0; i<n; i++){
    for(int j = n; j>i; j--){
        printf(" ");
    }
    for(int k = 0; k<=i; k++){
        printf("*");
    }
    printf("\n");
}
printf("\n\n");

    for(int l = 0; l<n; l++){
        for(int m = n; m>=l; m--){
            printf(" ");
        }
        for(int p = 0; p<=l; p++){
            printf("*");
        }
        printf(" ");
        for(int q = 0; q<=l; q++){
            printf("*");
        }
        printf("\n");
    }

}
