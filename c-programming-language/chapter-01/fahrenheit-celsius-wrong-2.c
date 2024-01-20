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
        celsius = 5 * (fahr - 32) / 9;
        // what's the difference from the following statement to the correct one?
        // what will be printed?
        printf("%3d \t%6.0f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
