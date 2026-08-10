// Sum of powers

#include <stdio.h>

void main(){
    int i,j,m,prd,sum = 0;
    printf("Enter max number: ");
    scanf("%d",&m);
    for(i = 1;i<=m;i++){
    	prd = 1;
    	for(j = 1;j<=i;j++){
    	    prd *= i;
    	}
    	sum += prd;
    }
    printf("%d\n",sum);
}
