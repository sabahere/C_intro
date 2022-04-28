#include<stdio.h>
int main(void){
    printf("Enter radius:");
    float radius;
    scanf("%f", &radius);

    float circumference = 2*3.14159*radius;
    float diameter = 2*radius;
    float area = 3.14159*(radius*radius);
    printf("Diameter : %.2f\n", diameter);
    printf("Circumference : %.2f\n", circumference);
    printf("Area : %.2f\n", area);
}