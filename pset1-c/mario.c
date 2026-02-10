#include <cs50.h>
#include <stdio.h>
void print_row(int spaces, int hashes);
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        int spaces = (n - 1 - i);
        int hashes = (i + 1);
        print_row(spaces, hashes);
    }
}
void print_row(int spaces, int hashes)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < hashes; i++)
    {
        printf("#");
    }
    printf("\n");
}
