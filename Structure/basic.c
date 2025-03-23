#include <stdio.h>

struct Mark
{
    char name[' '];
    int marks;
};

void main()
{
    struct Mark obj1, obj2, obj3;

    printf("Enter the name of student 1: ");
    // gets(obj1.name);
    scanf("%s", obj1.name);
    printf("Enter the marks of student 1: ");
    scanf("%d", &obj1.marks);

    printf("Enter the name of student 2: ");
    // gets(obj2.name);
    scanf("%s", obj2.name);
    printf("Enter the marks of student 2: ");
    scanf("%d", &obj2.marks);

    printf("Enter the name of student 3: ");
    // gets(obj3.name);
    scanf("%s", obj3.name);
    printf("Enter the marks of student 3: ");
    scanf("%d", &obj3.marks);

    printf("Student 1: %s, Marks: %d\n", obj1.name, obj1.marks);
    printf("Student 2: %s, Marks: %d\n", obj2.name, obj2.marks);
    printf("Student 3: %s, Marks: %d\n", obj3.name, obj3.marks);
}
