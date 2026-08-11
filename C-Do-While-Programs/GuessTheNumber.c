// Guess the number

#include <stdio.h>

void main(){
    int number, guess;
    number = 37; // You can change this number to any value you want the user to guess
    do{
        printf("Guess the number: ");
        scanf("%d", &guess);
        if(guess < number){
            printf("Too low! Try again.\n");
        }
        else if(guess > number){
            printf("Too high! Try again.\n");
        }
        else{
            printf("Congratulations! You guessed the number.\n");
        }
    } 
    while(guess != number);
}