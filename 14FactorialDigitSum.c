#include<stdio.h>
int main(){
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    int o=m;
    int sum=0;
    while(m>0){
        int n=m%10;
        int prod=1;
        for(int i=1; i<=n;i++){
            prod=prod*i;
        }
        sum=sum+prod;
        m=m/10;
    }
    if(sum==o)
    printf("%d is an armastrong number",o);
    else
    printf("%d is not an armastrong number",o);
}