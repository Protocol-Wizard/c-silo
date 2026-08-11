// Counting the number of prime and even numbers

#include <stdio.h>

void main(){
    int n, m, primeCount = 0, evenCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        int count = 0;
        for(int j = 1;j <= num; j++){
            if(num % j == 0){
                count++;
            }
        }
        if(count == 2){
            primeCount++;
        }
        if(num % 2 == 0){
            evenCount++;
        }
    }
    printf("Number of prime numbers is: %d\n", primeCount);
    printf("Number of even numbers is: %d\n", evenCount);
}