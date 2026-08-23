#include <stdio.h>
// formula used for this program: C=(5/9)(F-32)
int main()
{
    float fahr, celsius;      // in C you can declare same type of variables at the same time
    float lower, step, upper; // int stands for integer type of variables and they dont have fractional parts, for that float type variables can be used.
    lower = 0;
    step = 20;
    upper = 300;
    fahr = lower;
    while (fahr <= upper) // if argument in parantheses is true it executes code inside its body. if its false this loop stops.

    {
        celsius = (5 / 9) * (fahr - 32);        // cant use that in int type because of division would truncate it to 0
                                                // it means that if it was int and 5/9 is around 0.555 C would remove .555 and only 0 would be remaining.
        printf("%3.0f %6.1f\n", fahr, celsius); // \d is used for integers, \t is for tab.
        fahr = fahr + step;
    }
    return 0;
}
