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
    c *= c-- % b-- + a;
    /*
    c = c * c-- % b-- + a
    c = 10 * 10 % 5 + 16
    c = 100 % 5 + 16
    c = 0 + 16
    c = 16
    */

    printf("a = %d, b = %d, c = %d, s = %d\n", a, b, c, s);

}