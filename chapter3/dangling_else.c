#include<stdio.h>

int main(void){

    int x, y;
    printf("Enter value of x and y:");//prompt user for value of x and y
    scanf("%d%d", &x, &y);

    if(x == 9 && y ==11){

        if ( x < 10 ){

            if ( y > 10 )
            puts( "*****" ); 
            else
            puts( "#####" );

        puts( "$$$$$" );
        }
    }

    if(x ==11 && y == 9){

        if ( x < 10 ) {

            if ( y > 10 ){
            puts( "*****" ); 
            }
            else {
            puts( "#####" );
            }

        puts( "$$$$$" );
        }
            
    }
}