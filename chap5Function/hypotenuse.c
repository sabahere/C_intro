#include<stdio.h>
int hypotenuse(int a, int b);

int main(void){
    printf("Enter value of perpendicular and base:");
    int perp, base;
    scanf("%d%d", &perp, &base);
    printf("Hypotenuse : %d\n", hypotenuse(perp, base));
}
int hypotenuse(int a, int b){
    for(int h = 1; h<a+b; h++){
        if (h*h == (a*a)+(b*b)){
            return h;
        }
    }
}