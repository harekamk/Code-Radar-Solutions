#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n>!0){
        printf("False");
    }else if(n==1){
        printf("False");
    }else{
        printf("True");
    }
    return 0;
}