#include<stdio.h>
int main(){
    int org_num,sum=0;
    scanf("%d",&org_num);
    int num=org_num;
    while (num>0)
    {
       sum+=num%10;
       num=num/10;
    }
    printf("sum of digits of the given number %d:%d",org_num,sum);
    
    
}