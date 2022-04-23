#include <stdio.h>
int main(void){
    int weight, height;
    printf("Enter weight in pound:");
    scanf("%d", &weight);
    printf("Enter height in inches:");
    scanf("%d", &height);
    int bmi = weight*703/(height*height);
    printf("Your Body mass idex(BMI) value is %i\n", bmi);
    printf("BMI VALUES \nUnderweight: less than 18.5 \nNormal: between 18.5 and 24.9 \nOverweight: between 25 and 29.9 \nObese: 30 or greater\n");
}