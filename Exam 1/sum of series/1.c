// s = 1 - 2 + 3 - 4 + 5 ....... - 100

#include <stdio.h>

int main()
{
    int i, s = 0;
    
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            s -= i;
        }
        else
        {
            s += i;
        }
    }
    printf("Sum of the series is %d", s);
    return 0;
}