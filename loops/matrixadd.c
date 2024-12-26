#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    // Input for matrix 1
    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        } }
    printf("Enter the elements of matrix 2:\n");   // Input for matrix 2
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }}
    for (i = 0; i < rows; i++) {   // Matrix addition
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        } }
    printf("Resultant matrix after addition:\n");   // Display the result
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}