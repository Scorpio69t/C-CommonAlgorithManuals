#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void SelectionSort(int *a, int length)
{
    int i, j, k, h;
    int temp;

    for(i = 0; i < length - 1; i++)
    {
        k = i;
        for(j = i + 1; j < length; j++)
        {
            if(a[j] < a[k])
            {
                k = j;
            }
        }
        if(k != i)
        {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }

        printf("第%d步排序结果: ", i);
        for(h = 0; h < length; h++)
        {
            printf("%d ", a[h]);
        }
        printf("\n");
    }
}

int main()
{
    int i;
    int arr[SIZE];

    srand(time(NULL));
    for(i = 0; i < SIZE; i++)
    {
        arr[i] = rand() / 1000 +100;
    }
    printf("排序前数组为: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    SelectionSort(arr, SIZE);

    printf("排序后数组为: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
