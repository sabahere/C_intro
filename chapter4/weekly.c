#include<stdio.h>
int main(void){
    double hourly, hour, worker, gross_sales, comission, product_salary, pieceworker;
    int product, paycode;
   printf("Enter pay code(-1 to end):");
   scanf("%i", &paycode);
   while(paycode != -1){
       switch(paycode){
           case 1://for salary of manager
           printf("Manager seleted.\nFixed weekly salary\n");
           break;

           case 2:
           printf("Worker selected>\n");
           printf("Salary per hour:$");//for hourly salary of workers
           scanf("%lf", &hourly);
           printf("Total hours worked:");
           scanf("%lf", &hour);
           if(hour<=40){
               worker = hourly*hour;
               printf("Weekly Salary :$ %.2lf\n", worker);
           }
           else{
               worker = (40*hourly)+((hour-40)*1.5*hourly);
               printf("Weekly Salary :$ %.2lf\n", worker);
           }
            break;

            case 3://for weekly salary of comission worker
            printf("%s", "Comission worker selected\n");
            printf("Gross weekly sales:$");
            scanf("%lf", &gross_sales);
            comission = (gross_sales*(5.7/100))+(float)250;
            printf("Weekly Salary:$ %.2lf\n", comission);
            break;

            case 4://for salary of pieceworker
            printf("Piecworker selected.\n");
            printf("Enter amount:$");
            scanf("%lff", &product_salary);
            printf("No. of product:");
            scanf("%d", &product);
            pieceworker = product_salary*product;
            printf("Weekly Salary: $ %.2f\n", pieceworker);
            break;
            //ignoring these
            case '\n':
            case '\t':
            case ' ':
            break;

            default:
                printf("Incorrect paycode\n");
       }
       printf("Enter pay code(-1 to end):");
       scanf("%i", &paycode);
   }
}