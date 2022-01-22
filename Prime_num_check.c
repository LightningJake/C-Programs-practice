#include<stdio.h>
 
void prime(int a){
    if (a==1){
        printf("The number is prime");
    }
    else if (a==2){
        printf("Number is non prime");
    }        
   for (int i=2;i<a/2;i++){ 
       if (a%i == 0){
        printf("Number is non prime");
        break;
       }
       printf("The number is prime");
       break;
   }
}
int main(){
   int n, result;
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);  
   prime(n);
   return 0;
}
