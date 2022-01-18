#include<stdio.h>

int main(){
    int n = 10, rem, a[10], i=0; //We can also take the value of n from the user, but make sure the size of the array is enough to have the binary output in it.
    while (n){
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;
    }
    for (int j = i-1; j >= 0; j--){
        printf("%d", a[j]);
    }  
    return 0;
}
