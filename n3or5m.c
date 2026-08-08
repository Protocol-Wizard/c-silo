// Numbers between n and m divisible by 3 or 5

#include <stdio.h>

void main(){
    int i,m,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter value of m: ");
    scanf("%d",&m);
    for(i = n;i<=m;i++){
    	if(i%3==0 || i%5==0){
            printf("%d ",i);
        }
    }
}
