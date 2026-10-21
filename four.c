#include <stdio.h>

float calculateAverage(int marks[], int n);
char calculateGrade(float avg);
void displayMarks(int marks[], int n);

int main() {
    int marks[5];
    int i;
    float average;
    char grade;

    printf("===== Student Marks Management System =====\n\n");

    // Taking input
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Enter between 0 and 100.\n");
            i--;
        }
    }

    // Display marks
    printf("\n----- Marks Details -----\n");
    displayMarks(marks, 5);

    // Calculate result
    average = calculateAverage(marks, 5);
    grade = calculateGrade(average);

    printf("\nAverage Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    if (average >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    printf("\nProgram finished successfully!\n");

    return 0;
}


// Function to calculate average
float calculateAverage(int marks[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    return (float)sum / n;
}


// Function to calculate grade
char calculateGrade(float avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 75)
        return 'B';
    else if (avg >= 60)
        return 'C';
    else if (avg >= 40)
        return 'D';
    else
        return 'F';
}


// Function to display marks
void displayMarks(int marks[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
}