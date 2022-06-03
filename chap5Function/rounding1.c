#include<stdio.h>
#include<math.h>
int roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreds(double number);
double roundToThousands(double number);

int main(void){
    printf("Enter value:");
    double x;
    scanf("%lf", &x);
    printf("Number you entered : %f\n", x );
    printf("Round to Integer: %d\n", roundToInteger(x));
    printf("Round to Hundreds: %f\n", roundToHundreds(x)) ;
    printf("Round to Thousands: %f\n", roundToThousands(x));
}
int roundToInteger(double number){
    int y = ceil(number);
    return y;
}
double roundToTenths(double number){
    double y = floor(number*10 + .5)/10;
    return y;
}
double roundToHundreds(double number){
    double y = floor(number*100 + .5)/100;
    return y;
}
double roundToThousands(double number){
    double y = floor(number*1000 + .5)/1000;
    return y;
}