// Sum of squares

#include <stdio.h>

void main(){
    int i,m,sum = 0;
    printf("Enter max number: ");
    scanf("%d",&m);
    for(i = 0;i<=m;i++){
    	sum += i*i;
    }
    printf("%d\n",sum);
}
