#include<stdio.h>

int main(){
    int marks;
    char grade;
    printf("enter your marks\n");
    scanf("%d", &marks);
    if (marks>=90)
    {
        grade = 'A';
    }
    else if(marks>=80 && marks<90){
        grade = 'B';
    }
    else if(marks>=70 && marks<80){
        grade = 'C';
    }
    else if(marks>=60 && marks<70){
        grade = 'D';
    }
    else{
        printf("You have to study HARD!");
    }
    switch(grade){
    case 'A' : 
        printf("Excellent!\n");
        break;   
    case 'B' :
        printf("V.Good\n");
        break;
    case 'C' :
        printf("Good\n");
        break;
    case 'D' :
        printf("You can do better\n");
        break;
    }            
    return 0;
}
