#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    int q = cents / 25;
    cents = cents % 25;
    int d = cents / 10;
    cents = cents % 10;
    int n = cents / 5;
    cents = cents % 5;
    int p = cents;
    int total = q + d + n + p;
    printf("%i\n", total);
    return 0;
}
