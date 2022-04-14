#include <stdio.h>
int main(void){
    float u, a, t;
    printf("Enter initial velocity:");
    scanf("%f", &u);
    printf("Enter acceleration:");
    scanf("%f", &a);
    printf("Enter time:");
    scanf("%f", &t);
    float v = u + a*t;
    float s = (u*t) + (a*t*t)/2;

    printf("Final velocity is %f\ndistance is %f\n", v, s);


}