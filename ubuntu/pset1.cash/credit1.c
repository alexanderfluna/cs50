#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for card number
    long card = get_long("Number: \n");

    // Get first integers from card number
    int f [8];
    f [0] = (card % 100) / 10;
    f [1] = (card % 10000) / 1000;
    f [2] = (card % 1000000 / 100000);
    f [3] = (card % 100000000 / 10000000);
    f [4] = (card % 10000000000 / 1000000000);
    f [5] = (card % 1000000000000 / 100000000000);
    f [6] = (card % 100000000000000 / 10000000000000);
    f [7] = (card % 10000000000000000 / 1000000000000000);
int sum = (f[0]*2+f[1]*2+f[2]*2+f[3]*2+f[4]*2+f[5]*2+f[6]*2+f[7]*2)+(f[0]+f[1]+f[2]+f[3]+f[4]+f[5]+f[6]+f[7]);
printf("%i,%i,%i,%i,%i,%i,%i,%i\n",f[0],f[1],f[2],f[3],f[4],f[5],f[6],f[7]);
printf("%i\n", sum);
}