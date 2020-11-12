#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

//冒泡排序算法
void BubbleSort(int *a, int length)
{
    int i, j, k, temp;

    for(i = 0; i < length - 1; i++)
    {
        for(j = length - 1; j > i; j--)
        {
            if(a[j-1] > a[j])
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
        printf("第%d步排序结果:", i);
        for(k = 0; k < length; k++)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
}

int main()
{
    int array[SIZE], i;

    srand(time(NULL));    //随机数种子
    for(i = 0; i < SIZE; i++)
    {
        array[i] = rand() / 1000 + 100;   //初始化数组
    }

    printf("排序前的数组为: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    BubbleSort(array, SIZE);

    printf("排序后的数组为: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
