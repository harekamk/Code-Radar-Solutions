#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("Positive");
    }else{
        printf("Negative");
    }
    return 0;
}