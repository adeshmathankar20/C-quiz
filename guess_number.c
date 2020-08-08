#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // generate the random number between 1 to 100
    do
    {
        printf("Guess the Number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("enter lower number\n");
        }
        else if(guess<number){
            printf("enter greater number\n");
        }
        else{
            printf("You guess the number in %d \n",nguess);
        }
        nguess++;

    } while (guess!=number);

    return 0;
}