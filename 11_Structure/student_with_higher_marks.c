#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[5];
    int i, highest = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < 5; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    printf("\n--- Student With Highest Marks ---\n");
    printf("Roll Number: %d\n", s[highest].roll_no);
    printf("Name: %s\n", s[highest].name);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}
