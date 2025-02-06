#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    if(n=='A'){
        printf("Excellent");
    }else if(n=='B'){
        printf("Good");
    }else if(n=='C'){
        printf("Average");
    }else if(n=='D'){
        printf("Below Average");
    }else if(n=='F'){
        printf("Fail");
    }else{
        printf("Invalid input");
    }
    return 0;
}