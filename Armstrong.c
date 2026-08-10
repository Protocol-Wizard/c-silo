// Armstrong

#include <stdio.h>

void main(){
    int j,m,n,o,d,c = 0,prd,sum = 0;
    printf("Enter number: ");
    scanf("%d",&m);
    n = m;
    while(n>0){
        n = n / 10;
        c += 1;
    }
    o = m;
    while(o>0){
        d = o%10;
        o = o / 10;
        prd = 1;
        for(int j = 1;j <= c;j++){
            prd *= d;
        }
        sum += prd;
    }
    if (m == sum){
        printf("Yeaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh.\n");
    }
    else{
        printf("Nope.\n");
    }
}
