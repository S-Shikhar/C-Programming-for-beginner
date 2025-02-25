/*
Write a program to input the terms and print Fibonacci Series.
The Fibonacci series is a series of numbers in which each number (Fibonacci number) is the sum of the two preceding numbers. The simplest is the series 1, 1, 2, 3, 5, 8, etc.
*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}