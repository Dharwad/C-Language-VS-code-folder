/* 
NUMBER GUESSING GAME
library used <stdlib.h>, <time.h> 
Use Loop and a random number generator
Rules to play:
Player who guesses the number in least attempts wins the game !
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));
    // Generate random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int guessed_number = 0 ;
    int number_of_guesses ;

    //printf("Random number is: %d\n", random_number);
    
    do{
        printf("Guess the number\n");
        scanf("%d",&guessed_number);
        if(guessed_number>random_number){
        printf("Please enter lower number\n");
        }
        else if (guessed_number<random_number){
            printf("Please enter a higher number\n");
        }
        else{
            printf("Congrats you have the number!\n");
        }
        number_of_guesses++;
    }while (guessed_number != random_number);
    
    printf("you the correct number in %d attempts\n",number_of_guesses);

    return 0;
}