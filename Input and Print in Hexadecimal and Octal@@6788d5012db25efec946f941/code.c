#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    printf("Hexadecimal: %x",n);
    printf("Octal: %o",n);
    return 0;
}