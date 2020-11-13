#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void ShellSort(int *a, int length)
{
    int i, j, h;
    int r, temp;
    int x = 0;

    for(r = length/2; r >= 1; r /= 2)
    {
        for(i = r; i < length; i++)
        {
            temp = a[i];
            j = i - r;
            while(j >= 0 && temp < a[j])
            {
                a[j + r] = a[j];
                j -= r;
            }
            a[j + r] = temp;
        }
        x++;
        printf("第%d步排序结果: ", x);
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

    ShellSort(arr, SIZE);

    printf("排序后数组为: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
