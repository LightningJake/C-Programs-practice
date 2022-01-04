#include<stdio.h>

struct twodimvector{
    int x,y;
};

struct twodimvector sum(struct twodimvector first, struct twodimvector second){
    int a,b;
    a = first.x + second.x;
    b = first.y + second.y;
    struct twodimvector result = {a,b};
    return result;
}
int main(){
    struct twodimvector v1 = {1,4};
    struct twodimvector v2 = {11,54};
    struct twodimvector v3 = sum(v1,v2);
    printf("%di + %dj", v3.x, v3.y); 
    return 0;
}
