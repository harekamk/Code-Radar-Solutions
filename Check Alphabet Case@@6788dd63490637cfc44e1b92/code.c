#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf(" %c",&n);
    if(isupper(n)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}