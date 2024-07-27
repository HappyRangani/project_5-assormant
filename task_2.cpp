#include <stdio.h>

main() 
{
    int row, col;
    
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    
    int arr[row][col];
    int i,j;
    
    printf("Enter array's elements:\n");
    for (i = 0; i < row; ++i) 
	{
        for (j = 0; j < col; ++j) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int largest = arr[0][0];
    
    for (i = 0; i < row; ++i) 
    {
        for (j = 0; j < col; ++j) 
		{
            if (arr[i][j] > largest) 
			{
                largest = arr[i][j];
            }
        }
    }
    
    printf("The largest element in the array is: %d\n", largest);
    
}