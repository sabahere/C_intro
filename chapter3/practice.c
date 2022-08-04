#include <stdio.h>
int main(void){
    int sales, product, x, total;
    printf("Enter sales(press 1 or 2 to end):");
    scanf("%d", &sales);
    int count = 0;
    while(sales != 1 && sales!=2){
    if ( sales >= 5000 )
    puts( "Sales are greater than or equal to $5000\n" );
    else
    puts( "Sales are less than $5000\n" );

    count++;
    printf("Enter sales(press 1 or 2 to end):");
    scanf("%d", &sales);
    }
    x = 1;
    product = 0;
    while(x<=10){
        product *=x;
        ++x;
    }
    printf("x is %d\n", x);

}