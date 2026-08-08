// Compare 2 numbers

#include <stdio.h>

void main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater than %d\n",a,b);
    }
    else if (a==b){
        printf("%d is equal to %d\n",a,b);
    }
    else{
        printf("%d is greater than %d\n",b,a);
    }
}
