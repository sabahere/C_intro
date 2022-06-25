/*2 (a)scanf used as formatted input, it reads the input from user and store it to 
the variable of defined data type.
printf used as formatted output, as it format the int or char or any other data type
into the print statement.

(b)if  statement - 

		if (condition){
		body
		}
if the condition in the if statement is true then, the program will execute the body part of 
if statement, and if the condition is false, then the statement will not execute.
Example :	if(x == 2){
		    printf("x is equal to 2");
		}

if-else  statement - 

		if (condition){
		body
		}
		else{
		body
		}
if the condition in the if statement is true then, the program will execute the body part of 
if statement, and if the condition is false, then the statement within else stament will execute.
Example :	if(x == 2){
		    printf("x is equal to 2");
		}
		else{
		    printf("x is not equal to 2");
		}

nested if-else -
		if(condition){

		if (condition){
		body
		}
		else{
		body
		}

		}	
using an if-else statement within the if-else statement

cascaded if-else - 
		if (condition){
		body
		}
		else if (condition){
		body
		}
		else if (condition){
		body
		}
		else if (condition){
		body
		}
		else{
		body
		}
In this case, C will check each if statement to see if the condition satisfies, and if it does,then only the
program within that statement will execute and if none of the condition satisfy then else statement 
will execute.

4 (a)Function : Shortcut of solving problems

4(b)Pass by value and pass by reference are two kind by which the funtcion paramter are used.
When a function is passing by value it means, the original value of the variable within parameter
doesn't change.But, when a function is passing value by reference, it changes the original value of 
the variable defined within function parameter.	
Functions can have int, char or void return type, where void define that function will not return 
any value. Also function can have void as input where it takes no input from the call.

5(a) While loop - 
		while(condition){
		statement
		}
This loop execute and will go on executing until the condition is satisfied.
Variables can't be defined within condition.

for- loop -
	for(initialisation; condition; increment or decrement){
	statement
	}
variable can be initialised within paramteres of for loop but same variable 
can't be use after the for loop ends and as while loop it also execute and 
will go on executing until the condition is satisfied.

do-while loop -
	do{
	statement
	}
	while(conditon){
	statement
	}
unlike while or any other loop this will execue atleast once and then 
check the conditon, will go on executing until the condition is satisfied.

5(b)break statement -It terminates the loop or conditional statment.
Example:
	    int a = 0;
	    while(a>0){
		printf("a is %i", a);
	      if(a == 5){
		break;
	      }
		a++;
	     }
here, if a becomes equal 5, it terminates the loop

continue statement -
Example:
	    int a = 0;
	    while(a>0){
		printf("a is %i", a);
	      if(a %5 == 0){
		continue;
	      }
		a++;
	     }
Here, continue statement will skip all number which
is multiple of 5 and then continues the program.
		
*/
#include<stdio.h>
#include<cs50.h>

long long int fibonacci(int a);

int main(void){
//2 (c)
    double units, charge;

    string name = get_string("Name :");
    printf("Total units consumed: ");
    scanf("%lf", &units);

    if(units <= 200 && units>=0)
    {

        charge = ((80*units)/100.0);

        if(charge <= 100){
            printf("Amount (Rs): 100.00\n");
        }
        else{
            printf("Amount(Rs): %.2f\n", charge);
        }

    }
    else if(units <= 300 && units>200)
    {
        charge = ((90*units)/100.0);
        printf("Amount(Rs): %.2f\n", charge);
    }
    else if(units > 300 && units <= 400)
    {
        charge = ((100*units)/100.0);
        printf("Amount(Rs): %.2f\n", charge);
    }
    else if(units > 400)
    {
        charge = ((100*units)/100.0);
        double extra = (charge*15)/100;
        printf("Amount(Rs): %.2f\n", charge + extra);
    }
    puts("");
    //5(c)
    printf("Enter an integer: ");
    int a;
    scanf("%i", &a);
    long long int b = fibonacci(a);
    printf("%ith fibonacci number : %lli\n", a, b);
}

long long int fibonacci(int a){

    if(a == 0 || a == 1){
        return a;
    }
    else{
        long long int a1, a2, sum;
        a1 = 0;
        a2 = 1;
        for(int i = 2; i<=a; i++)
        {
            sum = a1 + a2;
            a1 = a2;
            a2 = sum;
        }
        return sum;
    }
}