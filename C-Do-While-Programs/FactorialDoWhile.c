// Do while factorial

#include <stdio.h>

void main() {
    int num;
    char ch;
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        int factorial = 1;
        for(int i = 1; i <= num; i++){
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
    }
    while(ch == 'y' || ch == 'Y');
}
