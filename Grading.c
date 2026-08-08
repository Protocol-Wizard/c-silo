// Grading

#include <stdio.h>

void main(){
    int a;
    printf("Enter mark: ");
    scanf("%d",&a);
    if (0<=a && a<=100){
        if(a<60){
            printf("F");
        }
        else if(a<70){
        printf("D");
        }
        else if(a<80){
            printf("C");
        }
        else if(a<90){
            printf("B");
        }
        else if(a<=100){
            printf("A");
        }
    }
    else{
        printf("Invalid mark.");
    }
}
