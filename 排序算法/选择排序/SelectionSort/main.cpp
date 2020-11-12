#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

constexpr int SIZE = 10;

void SelectionSort(array<int, SIZE> &a)
{
    int length = a.size();
    for(int i = 0; i < length - 1; i++)
    {
        int k = i;
        for(int j = i + 1; j < length; j++)
        {
            if(a[j] < a[k])
            {
                k = j;
            }
        }
        if(k != i)
        {
            int temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }

        cout << "第" << i << "步排序结果: ";
        for(auto it = a.begin(); it != a.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}


int main()
{
    array<int, SIZE> arr = {0};

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() / 1000 +100;
    }
    cout << "排序前数组为: " <<endl;
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    SelectionSort(arr);

    cout << "排序后数组为: " <<endl;
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
