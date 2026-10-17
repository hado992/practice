#include <stdio.h>

int main()
{
    int grade_boundaryA = 0;
    int grade_boundaryB = 0;
    int grade = 0;

    printf("Grade boundary for an A:");
    scanf("%d", &grade_boundaryA);

    printf("Grade boundary for an B:");
    scanf("%d", &grade_boundaryB);

    printf("enter student grade:");
    scanf("%d", &grade);

    if (grade >= grade_boundaryA)
        
    {
        printf("you got an A");
    }
    else if (grade >= grade_boundaryB)
    {
        printf("you got a B");
    }

    else
    {
        printf("you got below a grade B");
    }

    return 0;
}
