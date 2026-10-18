#include <stdio.h>

int main()
{
    /*int grade_boundaryA = 0;
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
        printf("you got an A\n");
    }
    else if (grade >= grade_boundaryB)
    {
        printf("you got a B\n");
    }

    else
    {
        printf("you got below a grade B\n");
    }

    int weight = 0;
    printf("enter weight:");
    scanf("%d", &weight);

    int height = 0;
    printf("enter height:");
    scanf("%d", &height);

    if (height > 180 && weight > 50)
    printf("youre valid\n");
    else 
    printf("nah youre not valid\n");*/

    float i = 0.0;
    float num =0.0;
    float total =0.0;
    float avg =0.0;

    while (i < 5.0)
    {
        printf("enter number %f:", i+1);
        scanf("%f", &num);
        total = total + num;
        i++;
    }

    avg = total / 5.0;

    printf("average: %f", avg);



    return 0;
}

