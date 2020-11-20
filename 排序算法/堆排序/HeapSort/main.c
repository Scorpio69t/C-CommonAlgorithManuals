#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void HeapSort(int a[], int n)
{
    int i, j, h, k;
    int t;

    for(i = n / 2 - 1; i >= 0; i--)  //将a[0,n-1]建成大根堆
    {
        while(2 * i + 1 < n)  //第i个结点有右子树
        {
            j = 2 * i + 1;
            if((j + 1) < n){
                if(a[j] < a[j+1]){
                    j++;
                }
            }
            if(a[i] < a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
                i = j;
            } else {
                break;
            }
        }
    }

    //输出构成的堆
    printf("原始数据构成的堆: \n");
    for(h = 0; h < n; h++)
    {
        printf("%d ", a[h]);
    }
    printf("\n");

    for(i = n - 1; i > 0; i--)
    {
        t = a[0];
        a[0] = a[i];
        a[i] = t;
        k = 0;
        while(2 * k + 1 < i)
        {
            j = 2 * k + 1;
            if((j + 1) < i)
            {
                if(a[j] < a[j+1])
                {
                    j++;
                }
            }
            if(a[k] < a[j])
            {
                t= a[k];
                a[k] = a[j];
                a[j] = t;
                k = j;
            } else {
                break;
            }
        }
        printf("第%d步排序结果: ", n - i);
        for(h = 0; h < n; h++)
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
        arr[i] = rand() / 1000 + 100;
    }

    printf("排序前: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    HeapSort(arr, SIZE);

    printf("排序后: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
