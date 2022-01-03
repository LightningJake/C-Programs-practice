#include<stdio.h>

int main(){
    char name[] = "Jake";
    for (int i = 0; i < 4; i++)
    {
        name[i]++;
    }
    printf("The string is %s ", name);
    return 0;
}
