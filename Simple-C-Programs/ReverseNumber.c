// Reverse a number

#include <stdio.h>

void main(){
    int m,d,num=0;
    printf("Enter number: ");
    scanf("%d",&m);
    while(m>0){
        d = m%10;
        m = m / 10;
        num = (num*10)+d;
    }
    printf("%d\n",num);
}
