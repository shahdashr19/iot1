#include<stdio.h>
int main(){

    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

     printf("GCD of the entered integers is %d\n", x);

}
    
