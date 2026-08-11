// Product of all odd numbers between n and m

#include <stdio.h>

void main(){
    int n, m, product = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    for(int i = n; i <= m; i++){
        if(i % 2 != 0){
            product *= i;
        }
    }
    printf("%d\n",product);
}