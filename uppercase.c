#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string s = get_tring("Before: ");
    printf("After: ")
    for (int i = 0; i < strlen(s); i++
{
    if (s[1] >= 'a' && s[i] <= 'z')
    {
        printf("%c", s[i] - 32);
    }
    else
    {
        printf("%c", s[i])
    }
})

}