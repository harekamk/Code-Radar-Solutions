#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c &7 a+c>b && b+c>a){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}