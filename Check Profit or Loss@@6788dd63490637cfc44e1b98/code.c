#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int c,s;
    scanf("%d %d",&c,&s);
    if(c>s){
        printf("Loss");
    }else if(c<s){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}