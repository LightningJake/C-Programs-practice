#include<stdio.h>

int reverse(int a[], int n){
/*Swap 0 with n-1
  Swap 1 with n-2
  .
  Swap i with n-i
  .
  Till n/2        */
  int temp;
  for (int i = 0; i < n/2; i++) //If we dont type n/2 here then the array will get swapped twice and same array will be printed.
  {
      // Swap i with n-i
      temp = a[i];
      a[i] = a[n-i-1];
      a[n-i-1] = temp;
  }
  
}
void display(int* ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    display(arr, 10);
    reverse(arr, 10);
    display(arr, 10);
    return 0;
}
