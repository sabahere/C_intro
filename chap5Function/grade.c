#include<stdio.h>

int toQualityPoints(int a);

int main(){
    printf("Student's average : ");
    int avg;
    scanf("%d", &avg);
    printf("Quality point: %d\n", toQualityPoints(avg));
}

//function for quality points of students's average
int toQualityPoints(int a){
    if(a >= 90 && a<=100){
        return 4;
    }
    else if(a>=80 && a<=89){
        return 3;
    }
    else if(a>=70 && a<=79){
        return 2;
    }
    else if(a>=60 && a<=69){
        return 1;
    }
    else if(a<60){
        return 0;
    }
}