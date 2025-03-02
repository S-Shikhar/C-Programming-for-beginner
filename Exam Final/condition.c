#include <stdio.h>

int main()
{
    char name[100];
    float phy, chem, bio, avg;

    printf("Enter the name of the student: ");
    gets(name);

    printf("Mark Obtained in Physics: ");
    scanf("%f", &phy);
    printf("Mark Obtained in Chemistry: ");
    scanf("%f", &chem);
    printf("Mark Obtained in Biology: ");
    scanf("%f", &bio);

    avg = (phy + chem + bio) / 3;

    printf("\n");
    printf("\tDetails of the Student\n");
    printf("Name: ");
    puts(name);
    printf("Average Marks = %.2f\n", avg);

    if (avg >= 80)
    {
        printf("Distinction");
    }
    else if (avg >= 60 && avg < 80)
    {
        printf("First Division");
    }
    else if (avg >= 45 && avg < 60)
    {
        printf("Second Division");
    }
    else if (avg >= 40 && avg < 45)
    {
        printf("Pass");
    }
    else
    {
        printf("Promotion not granted");
    }
}