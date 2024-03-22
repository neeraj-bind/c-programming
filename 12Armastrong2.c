#include<stdio.h>
int main(){
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    int n=m;
    int o=m; 
    int count = 0;
    int sum=0;
    
    while(n!=0){
        count++;
        n=n/10;
        
    }
    while(o!=0){
        int x=o%10;
        int prod=1;
        for(int i=1; i<=count; i++){
            prod=prod*x;
        }
        sum=sum+prod;
        o=o/10;
    }
    if(sum==m)
    printf("%d is an armastrong number",m);
    else
    printf("%d is not an armastrong number",m);
}