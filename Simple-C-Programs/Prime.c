// Prime

#include <stdio.h>

void main(){
    int i,n;
    printf("Enter: ");
    scanf("%d",&i);
    n = 0;
    for(int j = 1; j <= i; j++){
        if(i%j==0){
            n += 1;
        }
    }
    if(n == 2){
        printf("Prime.");
    }
    else{
        printf("Nope.");
    }
}
