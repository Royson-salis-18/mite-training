#include <stdio.h>
#define M 3  // Number of subjects

void calculateTotalMarks(int marks[][M], int n, int totalMarks[]) {
    for (int i = 0; i < n; i++) {
        totalMarks[i] = 0;
        for (int j = 0; j < M; j++) {
            totalMarks[i] += marks[i][j];
        }
    }
}

void sortStudents(int totalMarks[], int n) {
    // Using bubble sort for simplicity
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (totalMarks[j] < totalMarks[j + 1]) {
                // Swap total marks
                int temp = totalMarks[j];
                totalMarks[j] = totalMarks[j + 1];
                totalMarks[j + 1] = temp;
            }
        }
    }
}
