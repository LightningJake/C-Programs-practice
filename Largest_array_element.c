#include<stdio.h>

int returnMax(int array[], int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {1,12,3,54,5,67,654};
    //We can also take the elements of array from the user, just put a for loop and take the input.
    int max = returnMax(arr, 7);
    printf("The largest element in the array is %d", max);
    return 0;
}
