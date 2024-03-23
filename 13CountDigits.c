#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count=0;
    if(n==0)
        count++;
    while(n!=0){
    count++;
    n=n/10;
    
    }
printf("%d", count);
}