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

    printf("Enter row number: ");
    scanf("%d", &rownum);

    printf("Elements of row %d: ", rownum);
    for(j = 0; j < col; j++) 
	{
        printf("%d, ", a[rownum][j]);
        rowsum += a[rownum][j];
    }
    
    printf("\nThe sum of row %d: %d\n", rownum, rowsum);

    printf("Enter column number: ");
    scanf("%d", &colnum);

    printf("Elements of column %d: ", colnum);
    for(i = 0; i < row; i++) 
	{
        printf("%d, ", a[i][colnum]);
        colsum += a[i][colnum];
    }
    printf("\nThe sum of column %d: %d\n", colnum, colsum);

}