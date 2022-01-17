#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Enter the last natural number you want the sum of:- ");
    scanf("%d", &num);
    // Sum = 1+2+3...+n;
    // Runs in Linear time
    // for (int i = 0; i < num; i++){
    //     sum += i;
    // }

    // Runs in Constant time
    sum = (num*num + num)/2;
    printf("Sum of first %d natural numbers is %d\n", num, sum);    
    return 0;
}
