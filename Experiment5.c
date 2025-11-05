/******************************************************************************
Name : Sangeeta Bind 
UIN : 251C021
DIV : B
Branch : Civil
*******************************************************************************/
#include <stdio.h>
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nFactorial of %d using iterative method = %lld\n", num, factorial_iterative(num));
    printf("Factorial of %d using recursive method = %lld\n", num, factorial_recursive(num));
return 0;
}
