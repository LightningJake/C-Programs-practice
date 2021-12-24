#include<stdio.h>

int main(){
    int a[2][3][3], i,j,k;
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            for(k=0;k<=3;k++){
                printf("Enter the value of matrix[%d][%d][%d]: ", i,j,k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("Printing the value in matrix: \n");
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            for(k=0;k<=3;k++){
                printf("%d", a[i][j][k]);
                if(k==3){
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
