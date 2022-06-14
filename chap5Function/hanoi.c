#include<stdio.h>
void hanoi(int disk, int source, int dest, int aux){
    if(disk == 1){
    printf("disk %i moved from peg %i => %i\n", disk, source, dest);
    }
    else{
        hanoi(disk -1, source, aux, dest);
        printf("disk %i moved from peg %i => %i\n", disk, source, dest);
        hanoi(disk-1 , aux, dest, source);
    }
}

int main(){
    printf("No. of disks : ");
    int disk;
    scanf("%d", &disk);
    hanoi(disk, 1, 2, 3);
}
