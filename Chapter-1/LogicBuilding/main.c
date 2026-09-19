#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int reverseInteger1(int n) // my way
{

    if (n > 9)
    {

        char str[10];
        snprintf(str, sizeof(str), "%d", n);
        int left = 0;
        int right = strlen(str) - 1;
        while (left < right)
        {
            int temp = str[right];
            str[right] = str[left];
            str[left] = temp;
            left++;
            right--;
        }
        int number = (int)strtol(str, NULL, 10);
        return number;
    }
    else
    {
        return 0;
    }
}

int reverseInteger2(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        // n % 10 gives last digit of number
        // n \ 10 removes last digits
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }
    return revNum;
}

bool primeNumber(int n)
{

    if (n > 2)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

bool isPower1(int x, int y)
{
    // we need to check if y is multiple of x or not.
    if (x != 1 && x != 0)
    {
        int total = 1;
        while (total < y)
        {
            total = total * x;
            if (total == y)
            {
                return true;
            }
        }
    }
    return false;
}

// binary search method.
bool isPower2(int x, int y)
{
    if (x == 1)
    {
        return (y == 1);
    }

    if (y == 1)

    {
        return true;
    }

    int power = x, i = 1;
    while (power < y)
    {
        power *= power;
        i *= 2;
    }
    if (power == y)
    {
        return true;
    }

    // Binary search (unusal one for me)
    int low = x, high = power;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // trying to find exponent with log
        // i don't quite understand this logic yet...
        int exponent = (int)(log(mid) / log(x));
        int result = (int)powl(x, exponent);
        if (result == y)
        {
            return true;
        }

        if (result < y)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}
// kinda math smart with logs
// and also in c base of log is 2. something (e) not the base 2
// so its kinda weird
bool isPower3(int x, int y)
{
    if (x == 1)
    {
        return y == 1;
    }

    if (y == 1)
    {
        return true;
    }
    double res = log(y) / log(x);
    return fabs(res - round(res)) < 1e-10;
}

typedef struct
{
    int x, y;
} Point;

bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
    if (l1.x > r2.x || l2.x > r1.x)
    {
        return false;
    }
    if (r1.y > l2.y || r2.y > l1.y)
    {
        return false;
    }
    return true;
}
int main()
{
    // printf("%d\n", reverseInteger1(123));
    // printf("%d\n", reverseInteger2(123));
    // if (primeNumber(17))
    // {
    //     printf("true\n");
    // }
    // else
    // {
    //     printf("false\n");
    // }

    Point pointL1 = {0, 10}; // Rect 1: x ∈ [0,10], y ∈ [0,10]
    Point pointR1 = {10, 0};
    Point pointL2 = {50, 5}; // Rect 2: x ∈ [50,60], y ∈ [0,5]
    Point pointR2 = {60, 0};
    if (doOverlap(pointL1, pointR1, pointL2, pointR2))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}