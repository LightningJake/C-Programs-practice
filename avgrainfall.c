#include<stdio.h>

int main(){
    float year,rainfall,total=0,months,avg;
    int i,j;
    printf("Enter the number of years : ");
    scanf("%f", &year);
    for(int i=1; i<=year; i++){
        for(int j=1; j<=12; j++){
            printf("Enter the amount of rainfall in inches for month%d of year%d : ",j,i);
            scanf("%f", &rainfall);
            total = total + rainfall;             
        }
    }
    printf("\nTotal rainfall : %d", total);
    months = year*12;
    printf("\nNo. of months = %f", months);
    avg= total/months;
    printf("\nAverage rainfall = %f", avg);
    return 0;
}
