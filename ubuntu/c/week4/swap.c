#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    //set int x and y = to a number
    int x = 1;
    int y = 2;

    //prints out x and y before swap
    printf("x is %i, y is %i\n", x, y);
    //runs swap function on x and y
    swap(&x, &y);
    //prints out x and y after swap
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    //creates a temporary variable to store value of int a
    int tmp = *a;
    //sets the value of int b inside of int a
    *a = *b;
    //sets the value inside of temporary variable into int b
    *b = tmp;
}