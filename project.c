#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("the number is %d\n", number);
    //  random number ganrators end
    //   lets start do project
    do
    {
        printf("Guess The number Between 0 to 100\n");
        scanf("%d", &guess);
        if (guess > number)

        {
            printf("lower number please!!!! \n");
        }
        else if (guess < number)

        {
            printf("higher number please!!!!\n");
        }
        else
        {
            printf("you guessed in %d attempts\n", nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}