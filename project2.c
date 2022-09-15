#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int saappaanibanduk(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("This Game Like A Rock Paper Scissors.\n");
    printf("!!!!!!!! Disclaimer:: Please Use only Small Letters !!!!!!!!\n");
    printf("Enter 's' for Saap/Snake.\nEnter 'w' for Paani/water.\nEnter 'g' for Banduk/Gun.\n");
    scanf("%c", &you);
    int result = saappaanibanduk(you, comp);
    if (result == 0)
    {
        printf("Kya Soch He Teri !! Game Draw \n");
    }
    else if (result == 1)
    {
        printf("Aap Kaha The Gyanibaba,You Win \n");
    }
    else
    {
        printf("Ha Ji aa gaya re !! You Lose \n");
    }

    printf("You Choose %c and Computer Choose %c", you, comp);

    return 0;
}