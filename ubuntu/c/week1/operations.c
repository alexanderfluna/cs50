#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    printf("x+y= %.1f\n", x+y);
    printf("x-y= %.1f\n", x-y);
    printf("x*y= %.1f\n", x*y);
    printf("x/y= %.1f\n", x/y);
    printf("x%2= %.1f\n", x%2);
}