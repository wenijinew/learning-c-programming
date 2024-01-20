#include <stdio.h>

/**
 * print Fahrenheit-Celsius table for fahr = 0 to 300
 */
int main(int argc, char const *argv[])
{
    /*
     * Fahrenheit-Celsius table
     * print Fahrenheit-Celsius table for fahr = 0 to 300
     */
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        // it's a mistake although it looks like the same as the following
        // celsius = 5 * (fahr - 32) / 9;
        // what will be printed?
        celsius = (5 / 9) * (fahr - 32);
        printf("%3d \t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
