// Sum where we take squares if even and plain if odd

#include <stdio.h>

void main(){
    int i,m,sum = 0;
    printf("Enter max number: ");
    scanf("%d",&m);
    for(i = 1;i<=m;i++){
    	if(i%2==0){
    	    sum += i*i;
    	}
    	else{
    	    sum += i;
    	}
    }
    printf("%d\n",sum);
}