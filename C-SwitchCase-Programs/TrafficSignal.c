//Traffic Signal

#include <stdio.h>

void main(){
    char clr;
    printf("Enter light color: ");
    scanf("%c",&clr);
    switch(clr){
    	case ('r'):
    	case ('R'): printf("Stop.\n");
    			  break;
    	case ('y'):
    	case ('Y'): printf("Slow.\n");
    			  break;
    	case ('g'):
    	case ('G'): printf("Go.\n");
    			  break;
    	default: printf("Enter something else.\n");
    		  break; 		  	  
    }    
}
