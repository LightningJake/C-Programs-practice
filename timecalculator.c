#include<stdio.h>

int main(){
    long int seconds;
    int days, hours, mins, sec;
    printf("Enter the seconds\n");
    scanf("%ld", &seconds);
    if(seconds>=86400){ //Days part
        days=seconds/86400;
        printf("days : %d\n", days);
    }
    else{
        days=0;
        printf("days : %d\n", days);
    }
    if(seconds%86400>=3600){ //Hours part
        hours=(seconds%86400)/3600;
        printf("Hours : %d\n", hours);
    }
    else{
        hours=0;
        printf("days : %d\n", days);
    }
    if(seconds%3600>=0){
        mins=(seconds%3600)/60;
        printf("Minutes : %d", mins);
    }
    else{
        mins=0;
        printf("Minutes : %d", mins);
    }
    sec=seconds%60;
    return 0;
}
