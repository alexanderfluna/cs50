#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //make sure there are only two command arguments
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //check if all key is all characters
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
        if (isalpha(argv[1][i]) == false)
        {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }

    //check if there are 26 characters in key
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    //Check for repeated characters (case-insensitive)
    int counter = 0;
    int m = 0;
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        for (int j = 0; argv[1][j] != '\0'; j++)
        {
            m++;
            if (argv[1][j] == argv[1][i])
            {
                counter++;
            }
        }
    }
    if (counter != strlen(argv[1]))
    {
        printf("Key must not contain repeated characters.\n");
        return 1;
    }

    //prompt user for plaintext
    string plain_text = get_string("plaintext: ");

    //set cipher text = plaintext
    string cipher_text = plain_text;

    //encrypts the plain_text
    int key;
    for (int i = 0, n = strlen(plain_text); i < n; ++i)
    {
        if (plain_text[i] >= 'A' && plain_text[i] <= 'Z')
        {
            key = plain_text[i] - 'A';
            cipher_text[i] = toupper(argv[1][key]);
        }
        else if (plain_text[i] >= 'a' && plain_text[i] <= 'z')
        {
            key = plain_text[i] - 'a';
            cipher_text[i] = tolower(argv[1][key]);
        }
        else if (isdigit(plain_text[i]))
        {
            cipher_text[i] = plain_text[i];
        }
    }

    //prints the ciphertext
    printf("ciphertext: %s\n", cipher_text);
    return 0;
}