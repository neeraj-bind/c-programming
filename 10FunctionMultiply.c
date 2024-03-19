#include <stdio.h>
int mul(int, int);
int main()
{
    int x=10,y=20,answer;
    answer=mul(x,y);
    printf("%d",answer);

    return 0;
}
int mul(int x, int y){
    int result=x*y;
    return result;
}
