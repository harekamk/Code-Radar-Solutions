#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else if(isdigit(ch)){
        printf("Digit");
    }else{
        printf("Special charcater");
    }
    return 0;
}