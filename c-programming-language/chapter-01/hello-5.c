#include <stdio.h>

int main()
{
    int fahr = 41;
    printf("Hello World! What's the result of the expression 5.0 * (%d - 32) / 9.0? It's %d.\n", fahr, 5.0 * (fahr - 32) / 9.0);

    fahr = 9;
    printf("Hello World! What's the result of the expression %d / 9.0? It's %d.\n", fahr, fahr / 9.0);

    fahr = 9;
    printf("Hello World! What's the result of the expression %d / 9? It's %d.\n", fahr, fahr / 9);
    return 0;
}