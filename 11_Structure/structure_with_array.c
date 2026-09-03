#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    int marks[3];
};

int main()
{
    struct Student s;
    int i, total = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter marks of 3 subjects:\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
    }

    printf("\nRoll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %d\n", total);

    return 0;
}
