#include<stdio.h>
double toYen(double a);
double toEuro(double b);
int main(){
    printf("Enter amount in USD:");//prompting user to enter amount in usd
    double usd;
    scanf("%lf", &usd);
    puts("USD\tYen\tEuro");
    printf("%.2f\t%.2f\t%.2f\n",usd, toYen(usd), toEuro(usd));//printing all amount in dollar,yen and euro
}
double toYen(double a){
    double yen = a*118.87;
    return yen;
}
double toEuro(double b){
    double euro = b*0.92;
    return euro;
}