#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card = get_long("Card Number: \n");
    int remainder = 1;
    float divide = .1;

    int first [8];

    for (int i = 0; i < 8; i++)
        {
        remainder *= 100;
        divide *= 100;
        first[i] = (card % remainder) / divide;
        }

        printf("%i,%i,%i,%i,%i,%i,%i,%i,\n", first[0], first [1], first[2], first[3], first[4], first[5], first[6], first[7]);
}