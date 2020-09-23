#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // check for 2 arguments only
    if (argc != 2)
    {
        printf("User: ./caesar key\n");
        return 1;
    }

    //checks if all char are digits
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //put key into an int k
    int k = atoi(argv[1]);

    // check if the key is negative
    if (k < 0)
    {
        printf("User: ./caesar key\n");
        return 1;
    }
    else
    {
        // prompt user for a code to encrypt
        string code = get_string("plaintext: \n");
        printf("ciphertext: ");

        for (int i = 0, n = strlen(code); i < n; i++)
        {
            //check if the letter is uppercase or lowercase then convert
            if islower(code[i])
            {
                printf("%c", (((code[i] + k) - 97) % 26) + 97);
            }
            else if isupper(code[i])
            {
                printf("%c", (((code[i] + k) - 65) % 26) + 65);
            }
            //if neither then just print whatever it is
            else
            {
                printf("%c", code[i]);
            }
        }
        printf("\n");
        return 0;
    }
}