#include<stdio.h>
int main(){
    int x,reversed=0;
    scanf("%d",&x);
    int num=x;
    while (num>0)
    {
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
        num /= 10;
    }
    printf("reversed number is %d",reversed);

}