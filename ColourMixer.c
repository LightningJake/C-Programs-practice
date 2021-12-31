//red,blue,yellow are primary. r+b=purple,r+y=orange,b+y=green.
#include<stdio.h>
#include<string.h>

int main(){
    char colour1[6];
    printf("Type your first colour from red,blue,yellow:- ");
    scanf("%s",&colour1);
    char colour2[6];
    printf("Type your second colour from red,blue,yellow:- ");
    scanf("%s", &colour2);
    if ((strcmp(colour1,"red")==0)&&(strcmp(colour2,"blue")==0)||(strcmp(colour1,"blue")==0)&&(strcmp(colour2,"red")==0))
    {
        printf("The mixture is purple");
    }
    else if ((strcmp(colour1,"red")==0)&&(strcmp(colour2,"yellow")==0)||(strcmp(colour1,"yellow")==0)&&(strcmp(colour2,"red")==0))
    {
        printf("The mixure is orange");
    }
    else if ((strcmp(colour1,"blue")==0)&&(strcmp(colour2,"yellow")==0)||(strcmp(colour1,"yellow")==0)&&(strcmp(colour2,"blue")==0))
    {
        printf("The mixture is green");
    }
    else{
        printf("ERROR! Your given colour is not included in the primary given colours.");
    }    
    return 0;
}
