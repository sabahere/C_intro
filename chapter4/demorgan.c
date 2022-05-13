#include<stdio.h>
int main(void){
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    if((!a && !b)==(!(a || b))){
        printf("true\n");

    }
    else if((!a || !b)==(!(a && b))){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    printf("\n\n");
    int x, y, c, d, e, f,i, j, k;
    if((!(x<5) && !(y >=7)) == (!((x<5) || (y>=7)))){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    if((!(c==k) || !(d !=5)) == (!((c==k) && (d !=5)))){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    if(!((e<= 8) && (f>4)) == (!(e<=8) || !(f>4))){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    if(!((i>4) || (j<=6)) == (!(i>4) && !(j<=6))){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}