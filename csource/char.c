#include <stdio.h>

int main() {
    int num1 = getchar();
    printf("test1: %d\n", num1);

    int num2 = putchar(num1);
    printf("\ntest2: %d\n", num2);
}