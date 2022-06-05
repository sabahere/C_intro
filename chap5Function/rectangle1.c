#include<stdio.h>
char fillCharacter(char a);
int length();
int breadth();
int main(void){
    
    printf("Enter character:");
    char character;
    scanf("%c", &character);
    fillCharacter(character);
}
int length(){
    printf("Enter length:");
    int length;
    scanf("%d", &length);
    return length;
}
int breadth(){
    printf("Enter breadth:");
    int breadth;
    scanf("%d", &breadth);
    return breadth;
}
char fillCharacter(char a){
    int x = length();
    int y = breadth();
    for(int i = 1; i<=y; i++){
        for(int j = 1; j<=x; j++){
            printf("%c", a);
        }
        printf("\n");
    }
}