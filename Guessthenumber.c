#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nGuesses;
    srand(time(0));
    number = rand()%100+1;

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess>number)
        {
            printf("Lower the number please\n");
        }
        else if(guess<number){
            printf("Greater the number please\n");
        }
        else{
            printf("YAYYY You guessed it right!\nYou took %d attempts", nGuesses);
        }
            nGuesses++;
        
    } while (guess!=number);
        
    return 0;
}
