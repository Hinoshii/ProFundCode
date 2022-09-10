#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    printf("Enter your Number : ");
    int inp;
    printf("Enter a number: ");
    scanf("%d", &inp);
    //input

    printf("%d! = %d", inp, factorial(inp));
    return 0;
}