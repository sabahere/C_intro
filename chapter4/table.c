#include<stdio.h>
#include<math.h>
int main(void){
    printf("Decimal\tbinary\toctal\thexadecimal\n");
    for(int i = 1; i<=256; i++){
        int x = i;
        int j = 1;
        long long binary = 0;
        while(x!=0){
            int v = x%2;
            x= x/2;
            binary += v*j;
            j *= 10;
        }
        printf("%d\t%lli\t%o\t%x\n", i,binary,  i, i);
    }
}