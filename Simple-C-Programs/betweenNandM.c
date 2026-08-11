// Numbers between n and m

#include <stdio.h>

void main(){
    int i,m,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter value of m: ");
    scanf("%d",&m);
    for(i = n;i<=m;i++){
        printf("%d ",i);
    }
}
