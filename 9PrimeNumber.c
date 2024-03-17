#include<stdio.h>

int main(){
    int n,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2; i<n; i++){
        if(n%i==0){
            printf("It is not a prime number");
            x=0;
            break;
        }
    }   
    if(x!=0){
        printf("It is a prime number");
    }

}
