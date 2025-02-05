#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float n;
    scanf("%f",&n);
    float area=n*n*3.14;
    printf("Area: %.2f",area);
    return 0;
}