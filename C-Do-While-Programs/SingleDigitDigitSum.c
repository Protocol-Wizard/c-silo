// Finds sum of digits of a number until a single digit is reached

#include <stdio.h>

void main(){
    int n, sum, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    do{
        sum = 0;
        do{
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        while (n > 0);
        n = sum;
    }
    while (n >= 10);
    printf("Single digit sum: %d\n", n);
}