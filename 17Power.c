#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a and b (a^b): ");
    scanf("%d%d",&a,&b);

    long int power=1;
    for(int i=1;i<=b;i++){
        power=power*b;
    }
    printf("%d",power);
}