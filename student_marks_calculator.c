#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float average;

    printf("Enter marks of 3 subjects:\n");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    if (average >= 75)
        printf("Grade: A\n");
    else if (average >= 60)
        printf("Grade: B\n");
    else if (average >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}