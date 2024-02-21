#include <stdio.h>
main() {
    int rows, cols;
    float average;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    int a[rows][cols];
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += a[i][j];
            count++;
        }
    }

    average = sum / count;

    printf("Average of the array elements: %f\n", average);
}