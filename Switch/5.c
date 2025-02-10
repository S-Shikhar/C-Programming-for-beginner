/*Write a menu driven program to display the following menu:
Conversion Table
============
Milliseconds to Seconds
Milliseconds to Minutes
Seconds to Milliseconds
Seconds to Minutes
Minutes to Milliseconds
Minutes to Seconds
For an incorrect choice, display an appropriate error message.
*/

#include <stdio.h>

void main()
{
    int choice;
    float time;
    printf("Conversion Table\n");
    printf("================\n");
    printf("1. Milliseconds to Seconds\n");
    printf("2. Milliseconds to Minutes\n");
    printf("3. Seconds to Milliseconds\n");
    printf("4. Seconds to Minutes\n");
    printf("5. Minutes to Milliseconds\n");
    printf("6. Minutes to Seconds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter time: ");
    scanf("%f", &time);
    switch (choice)
    {
    case 1:
        printf("%.2f milliseconds = %.2f seconds\n", time, time / 1000);
        break;
    case 2:
        printf("%.2f milliseconds = %.2f minutes\n", time, time / 60000);
        break;
    case 3:
        printf("%.2f seconds = %.2f milliseconds\n", time, time * 1000);
        break;
    case 4:
        printf("%.2f seconds = %.2f minutes\n", time, time / 60);
        break;
    case 5:
        printf("%.2f minutes = %.2f milliseconds\n", time, time * 60000);
        break;
    case 6:
        printf("%.2f minutes = %.2f seconds\n", time, time * 60);
        break;
    default:
        printf("Invalid choice\n");
    }
}