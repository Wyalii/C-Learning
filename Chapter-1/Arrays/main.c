#include <stdio.h>
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 11};
    // int length = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[5] = {1, 2, 3, 4, 5};
    // printf("%p", (void *)arr);
    // printf("%d", arr[3]);
    // for (int i = 4; i >= 0; i--)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[2][2] = {{10, 20},
    //                  {30, 40}};
    // int arr[2][2] = {10, 20, 30, 40};
    // printf("print 2D array elements:\n ");
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("i: %d, j: %d ,element: %d\n", i, j, arr[i][j]);
    //     }
    // }

    // printf("element: %d\n", arr[1][1]);
    // printf("element: %d\n", *(*(arr + 1)) + 1);

    int arr[2][3][2] = {
        {{1, 1},
         {2, 2},
         {3, 3}},
        {{4, 4},
         {5, 5},
         {6, 6}}};

    for (int i = 0; i < 2; i++)
    {
        printf("index position of 3D array i: %d\n", i);
        for (int j = 0; j < 3; j++)
        {
            printf("index position of 2D array j: %d\n", j);
            for (int l = 0; l < 2; l++)
            {
                printf("index position of 1D array l: %d\n", l);
                printf("element is: %d\n", arr[i][j][l]);
                        }
        }
    }
    return 0;
}