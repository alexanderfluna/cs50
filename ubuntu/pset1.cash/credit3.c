#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long n = get_long("Card Number: \n");

int remainder = 100;
int divide = 10;

    int f[i];
    for (int i = 0; i < 8; i++)
        {
        f[i] = (n % remainder) / divide;
        remainder *= 100;
        divide *= 100;
        }

printf("%i,%i,%i,%i,%i,%i,%i,%i\n",f[0],f[1],f[2],f[3],f[4],f[5],f[6],f[7]);

}