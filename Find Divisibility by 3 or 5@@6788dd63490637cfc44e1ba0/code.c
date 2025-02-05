#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n%3==0){
        printf("Divisible by 3");
    }else if(n%5==0){
        printf("Divisible by 5");
    }else{
        printf("Divisible by Both");
    }
    return 0;
}