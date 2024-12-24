#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 9;
    int c = 7;
    int largest;
    largest = a>b ? a : b;
    largest = c>largest? c: largest;
    printf("%d", largest);

    return 0;
}
