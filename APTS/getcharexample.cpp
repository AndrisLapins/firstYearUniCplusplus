
// A simple C program to demonstrate
// working of getchar_unlocked()
#include <stdio.h>
int main()
{
    // Syntax is same as getchar()
    char c = getchar_unlocked();

    printf("Entered character is %c", c);

    return 0;
}
