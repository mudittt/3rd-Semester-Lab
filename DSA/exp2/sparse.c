#include <stdio.h>
void sparseMatrix(int arr[][5])
{
    int new_arr[10][10];
    int row = 0, col = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] != 0)
            {
                new_arr[row][col] = i;
                new_arr[row + 1][col] = j;
                new_arr[row + 2][col] = arr[i][j];
                col++;
            }
        }
    }
    printf("\nThe Compacted Matrice : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", new_arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[4][5] = {{2, 0, 4, 0, 6},
                     {5, 0, 6, 0, 9},
                     {7, 0, 8, 0, 5},
                     {6, 0, 0, 0, 9}};
    printf("\nPrinting the array :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    sparseMatrix(arr);
    return 0;
}