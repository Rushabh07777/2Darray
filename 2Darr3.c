#include <stdio.h>
main() {
    int row, col;
    
    printf("Enter the array's row & column size: ");
    scanf("%d", &row);
    col = row; 
    
    int arr[row][col];
    
    printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j) { 
                sum += arr[i][j];
            }
        }
    }
    
    printf("\nSum of diagonal elements: %d\n", sum);
    
 }
