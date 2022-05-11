#include<stdio.h>
int main(void){
    int product, quantity, price;
    printf("Product number(-1 to end):");
    scanf("%d", &product);
    printf("Quantity sold for one day:");
    scanf("%d", &quantity);
    float retail = 0;
    int count = 0;
    while(product != -1){
        switch(product){
            case 1:
            retail = retail+((float)quantity*2.98);
            break;

            case 2:
            retail = retail+((float)quantity*4.50);
            break;

            case 3:
            retail = retail+((float)quantity*9.98);
            break;

            case 4:
            retail = retail+((float)quantity*4.49);
            break;

            case 5:
            retail = retail+((float)quantity*6.87);
            break;

            case '\n':
            case '\t':
            case ' ':
            break;

            default:
            printf("Incorrect input\n");
            break;
        }
        printf("Product number(-1 to end):");
        scanf("%d", &product);
        printf("Quantity sold for one day:");
        scanf("%d", &quantity);
    }
    printf("Retail value of all product sold last week : $%.2f\n", retail);
}