#include<stdio.h>
#include<math.h>

const char false = 0;

double root1(int a, int b, int c);
double root2(int a, int b, int c);

int main(){
    printf("Enter coefficients of a, b and c: ");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(root1(a, b, c)==false && root2(a, b, c)==false){
        printf("This equation has imaginary roots.\n");
    }
    else{
        printf("x1 = %.2f\n", root1(a, b, c));
        printf("x2 = %.2f\n", root2(a, b, c));
    }
}

double root1(int a, int b, int c){
    int x = pow(b, 2) - (4*a*c);
    if(x < 0){
        return false;
    }
    else{
        return ((float)-b + (pow(x, 0.5)))/(2*a);
        }
}

double root2(int a, int b, int c){
    int x = pow(b, 2) - (4*a*c);
    if(x < 0){
        return false;
    }
    else{
        return ((float)-b - (pow(x, 0.5)))/(2*a); 
    }
}