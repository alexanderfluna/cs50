#include <stdio.h>

int main(void)
{
    //sets int n = 50
    int n = 50;
    //prints the address of int n
    printf("The address of n is %p\n", &n);
    //points to the address of n and prints out its value
    printf("n = %i\n", *&n);

    //sets int x = 100
    int x = 100;
    //sets pointer y = address of int x
    int *y = &x;
    //prints address of int x
    printf("Pointer y is pointing to x's address at %p\n", y);

    //sets string s = EMMA
    char *s = "EMMA";
    //prints string s and address of string s
    printf("The string %s is at address %p\n", s, &s);
}