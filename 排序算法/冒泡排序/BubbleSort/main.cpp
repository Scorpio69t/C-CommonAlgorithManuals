#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

constexpr int SIZE = 10;

void BubbleSort(array<int, SIZE>& arr)
{
    int length = arr.size();
    for(int i = 0; i < length; i ++)
    {
        for(int j = length - 1; j > i; j--)
        {
            if(arr[j-1] > arr[j])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
        cout << "第" << i << "步的排序结果: ";
        for(auto iter = arr.begin(); iter != arr.end(); ++iter)
        {
            cout << *iter << " ";
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
        arr[i] = rand() / 1000 + 100;
    }

    cout << "排序前的数组为:" << endl;
    for(auto iter = arr.begin(); iter != arr.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    BubbleSort(arr);


    cout << "排序后的数组为:" << endl;
    for(auto iter = arr.begin(); iter != arr.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
