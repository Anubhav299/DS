#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int *arr = (int *)malloc(row * col * (sizeof(int)));

    printf("Enter Elements : ");
    for (int i = 0; i < row*col; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i * col + j]);
        }
        printf("\n");
    }

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%d ", arr[i * col + j]);
        }
        printf("\n");
    }
}

