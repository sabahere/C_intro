#include<stdio.h>
double largest(double a, double b, double c, double d);
int main(){
    printf("Enter 4 floating point numbers:");
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a,&b, &c, &d);
    printf("Largest is %.3f\n", largest(a,b, c, d));
}
double largest(double a, double b, double c, double d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if(b>a && b>c && b>d){
        return b;
    }
    else if(c>a && c>b && c>d){
        return c;
    }
    else if(d>a && d>b && d>c){
        return d;
    }
}