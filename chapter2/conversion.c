#include <stdio.h>
int main(void){
    int time;
    printf("Total time in second:"); //prompt user for time in seconds
    scanf("%d", &time); //store that input in a variable named time
    int hour, minute, seconds;
    hour = time /3600;// calculationg hour from seconds prompt by user
    int remainder = time % 3600;// calculating remainder of time/3600
    minute = remainder/60;// remainder divided by 60 gives minute
    seconds = remainder % 60;// remainder of minute gives second
    printf("%ihrs : %i min : %i sec\n", hour, minute, seconds);
     

}