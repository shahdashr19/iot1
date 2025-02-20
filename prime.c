#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not prime\n", num);
        return 0;
    }

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++; 
        }
    }
    if (count == 2) {
        printf("%d is prime\n", num);
    } else {
        printf("%d is not prime\n", num);
    }

    return 0;
}