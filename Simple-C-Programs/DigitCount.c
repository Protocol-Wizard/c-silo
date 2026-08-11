// Count of digits

#include <stdio.h>

void main(){
    int m,sum = 0;
    printf("Enter number: ");
    scanf("%d",&m);
    while (m>0){
        m = m / 10;
        sum += 1;
    }
    printf("%d\n",sum);
}
