#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int counter = 3;

    while (counter > 0)
    {
        printf("meow\n");
        counter--;
    }
}

int main(void)
{
    int i = 1;

    while (i <= 3)
    {
        printf("meow\n");
        i++;
    }
}

int main(void)
{
    int i = 0;

    while (i < 3)
    {
        printf("meow\n");
        i++;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
    
    while (true)
    {
        printf("meow\n");
    }
}