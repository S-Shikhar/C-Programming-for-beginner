  /*
Write a program to accept 20 integer numbers in a Single Dimensional Array. Find and display 
the following:
i. Number of even numbers.
ii. Number of odd numbers.
iii Number of multiples of 4.
*/

#include <stdio.h>

int main()
{
    int arr[20], i, even = 0, odd = 0, mul_4 = 0;

    printf("Enter 20 integer numbers:\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 20; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (arr[i] % 4 == 0)
        {
            mul_4++;
        }
    }

    printf("Number of even numbers is %d\n", even);
    printf("Number of odd numbers is %d\n", odd);
    printf("Number of multiples of 4 is %d\n", mul_4);

    return 0;
}