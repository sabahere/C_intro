#include<stdio.h>
double hypotenuse(double a, double b);

double main(void){
    printf("Enter value of perpendicular and base:");
    double perp, base;
    scanf("%lf%lf", &perp, &base);
    printf("Hypotenuse : %.2f\n", hypotenuse(perp, base));
}
double hypotenuse(double a, double b){
    for(int h = 1; h<a+b; h++){
        if (h*h == (a*a)+(b*b)){
            return h;
        }
    }
}