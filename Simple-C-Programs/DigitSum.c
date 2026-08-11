// Sum of digits

#include <stdio.h>

void main(){
    int i,m,sum = 0;
    printf("Enter number: ");
    scanf("%d",&m);
    while (m>0){
        i = m % 10;
        m = m / 10;
        sum += i;
    }
    printf("%d\n",sum);
}
