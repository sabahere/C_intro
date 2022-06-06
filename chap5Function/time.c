#include<stdio.h>
int time(int a, int b, int c);
int main(void){
    printf("Enter hour minute and second:");
    int hour, min, second;
    scanf("%d%d%d", &hour, &min, &second);
    printf("Time in second:%d\n", time(hour, min, second));
    
}
int time(int a, int b, int c){
    return a*60*60+b*60+c;
}