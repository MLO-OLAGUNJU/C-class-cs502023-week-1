#include <stdio.h>
#include <cs50.h>


int main(void)
{
    // const n = 3;
//     int n = get_int("Size: ");

// while (n < 1)
// {

// n= get_int("Size ")
// };

int n;

do
{
    n = get_int("Size: ");
} while (n < 1);    


    for (int i = 0; i < 4; i++)
    {
        printf ("?");
    }
    printf ("\n");


    for (int i = 0; i < 4; i++)
    {
        printf ("?");
    }
    printf ("\n");


    for (int i = 0; i < 4; i++)
    {
        printf ("#\n");
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf ("?");
        }
        printf ("\n");
    }
    
}


int get_size (void)
{
    int n;
    do
    {
        n = get_int("Size: ")
    } while (n < 1);
    return n;
}

void print_grid(int size)
{
    
}