#include<stdio.h>

int main(){
    //Take the number as input from the user:- 
    int num;
    printf("Enter the number whose multiplication table is to be printed:-  ");
    scanf("%d", &num);
    printf("The multiplication table of %d is", num);
    for (int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }    
    return 0;
}
