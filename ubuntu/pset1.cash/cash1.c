#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float positive;
    do
    {
        positive = get_float("Change owed: ");
    }
    while (0 > positive);
    positive = round(positive * 100);

    int change = 0;
    while (positive >= 25)
    {
        positive = positive - 25;
        change++;
    }
    while (positive >= 10)
    {
        positive = positive - 10;
        change++;
    }
    while (positive >= 5)
    {
        positive = positive - 5;
        change++;
    }
    while (positive >= 1)
    {
        positive = positive - 1;
        change++;
    }

    printf("%i\n", change);
}