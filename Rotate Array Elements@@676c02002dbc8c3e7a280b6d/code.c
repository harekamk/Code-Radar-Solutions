// Your code here...
#include<stdio.h>
int main(){
int a[100];
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=n-1;i>=1;i--){
    printf("%d\n",a[i]);
}
return 0;
}