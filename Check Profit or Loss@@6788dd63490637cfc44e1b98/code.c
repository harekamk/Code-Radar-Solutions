#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int c,s;
    scanf("%d %d",&c,&s);
    if(c>s){
        printf("Profit");
    }else{
        printf("Loss");
    }
    return 0;
}