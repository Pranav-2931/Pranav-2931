#include <stdio.h>

int main() {
    int n, i; 
    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("Enter number of rows: ");
    scanf("%d", &i);
    int arr[i][n];
    printf("Enter the values of the 2D array:\n");
    for (int row = 0; row < i; row++){
        for (int col = 0; col < n; col++)
            scanf("%d", &arr[row][col]);
    }

	printf("The 2D array is:\n");
    for (int row = 0; row < i; row++) {
        for (int col = 0; col < n; col++)
            printf("%d ", arr[row][col]);
        printf("\n");
    }
   
    return 0;
}

