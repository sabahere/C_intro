#include<stdio.h>
#include<math.h>
double triangle(double a, double b, double c);//function prototype
int main(void){
    printf("Enter 3 sides of a triangle:");//prompting user for 3 sides of a triangle
    double side1, side2, side3;
    scanf("%lf%lf%lf", &side1, &side2, &side3);
    //printing the area using function triangle()
    printf("Area : %.2f\n", triangle(side1, side2, side3));
}
//function for calculating area of a triangle 
double triangle(double a, double b, double c){
    double s = (a+b+c)/2;
    double area = s*(s-a)*(s-b)*(s-c);
    return sqrt(area);   
}