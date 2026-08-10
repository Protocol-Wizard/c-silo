// Number Palindrome

#include <stdio.h>

void main(){
    int m,n,d,num=0;
    printf("Enter number: ");
    scanf("%d",&n);
    m = n;
    while(m>0){
        d = m%10;
        m = m / 10;
        num = (num*10)+d;
    }
    if(num == n){
        printf("Yeaaaaaaaaaaaaaaaaaaahhhhhhhhhhhhhhhhhhh.\n");
    }
    else{
        printf("Nope.\n"); 
    }
}
