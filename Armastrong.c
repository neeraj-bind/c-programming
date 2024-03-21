#include<stdio.h>
int main(){
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    int n=m;
    int sum = 0;
    while(n!=0){
        int x = n%10;
        x = x*x*x;
        sum=sum+x;
        n=n/10;
    }
    if(sum==m)
    printf("%d is an armastrong number",m);
    else
    printf("%d is not an armastrong number",m);
}