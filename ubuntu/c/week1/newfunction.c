#include <cs50.h>
#include <stdio.h>

// Include variables from below
void hi(int n);
void hello(void);

// Do variables from below in main function
int main(void)
{
    hi(2);
    for (int i = 0; i < 3; i++)
    {
        hello();
    }
}

// Make variable hi
void hi(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("hi\n");
    }
}

// Make variable hello
void hello(void)
{
    printf("hello\n");
}