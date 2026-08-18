//Calculator

#include<stdio.h>

void main(){
    int a,b,c,ch;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    switch(ch){
    	case 1: printf("%d\n",a+b);
    		    break;
    	case 2: printf("%d\n",a-b);
    			break;
    	case 3: printf("%d\n",a*b);
    			break;
    	case 4: if(b!=0){
    		    printf("%d\n",a/b);
    			}
    			else{
    		    printf("Cannot divide by 0\n");
    			}
    			break;
    	default: printf("Only 1, 2, 3 or 4. Nothing else.\n");
    		 	 break;
    }
}