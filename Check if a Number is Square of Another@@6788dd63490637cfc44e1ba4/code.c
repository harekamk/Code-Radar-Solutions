#include <stdio.h>
#include <math.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a== pow(b, 2)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}