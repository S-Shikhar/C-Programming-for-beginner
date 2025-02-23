#include <stdio.h>

int main()
{
    int a = 5, b = 6, c = 10, s = 0;

    s = a++ + --b * --c;
    /*
    s = 5 + 5 * 9
    s = 5 + 45
    s = 50
    */
    a += a % c-- + b--;
    /*
    a = a + a % c-- + b--
    a = 5 + 5 % 9 + 6
    a = 5 + 5 + 6
    a = 16
    */

    printf("a = %d, b = %d, c = %d, s = %d\n", a, b, c, s);

}