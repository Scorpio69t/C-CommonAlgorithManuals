#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

constexpr int SIZE = 10;

void ShellSort(array<int, SIZE> &a)
{
    int length = a.size();
    int x = 0;

    for(int r = length/2; r >= 1; r /= 2)
    {
        for(int i = r; i < length; i++)
        {
            int temp = a[i];
            int j = i - r;
            while(j >= 0 && temp < a[j])
            {
                a[j + r] = a[j];
                j -= r;
            }
            a[j + r] = temp;
        }
        x++;
        cout << "第" << x << "步排序结果: ";
        for(auto it = a.begin(); it != a.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}

int main()
{
    array<int, SIZE> arr;

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() / 1000 +100;
    }

    cout << "排序前数组为: " << endl;
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    ShellSort(arr);

    cout << "排序后数组为: " << endl;
    for(auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
