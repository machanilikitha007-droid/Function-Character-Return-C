#include <stdio.h>

char getGrade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 50)
        return 'C';
    else
        return 'F';
}

int main()
{
    int marks;
    char grade;

    printf("Enter marks: ");
    scanf("%d", &marks);

    grade = getGrade(marks);

    printf("Grade = %c\n", grade);

    return 0;
}
