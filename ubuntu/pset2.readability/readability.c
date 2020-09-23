#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
//get text from user
    string text = get_string("Text: ");
    int letters = 0;
    int words = 1;
    int sentences = 0;

//count letters, words, & sentences
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text [i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

//use equation
    float grade = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8;
    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}