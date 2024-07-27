#include <stdio.h>

main() 
{
    int row, col, i, j, rownum, colnum ,rowsum=0 ,colsum=0;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int a[row][col];

    printf("Enter array's elements:\n");
    for(i = 0; i < row; i++) 
	{
        for(j = 0; j < col; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n 2D Array::->");
     for(i = 0; i < row; i++) 
	 {
        for(j = 0; j < col; j++) 
		{
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Transpose 2D Array ::->");
     for(i = 0; i < row; i++) 
	 {
        for(j = 0; j < col; j++) 
		{
            printf("%d", a[j][i]);
        }
        printf("\n");
    }
}