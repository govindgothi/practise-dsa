// 07_maxConsecutiveZeroes.cpp
#include <iostream>
using namespace std;

int maxConsecutiveZeroes(int nums[], int size)
{
    if (size == 0) return 0;
    int maxCountNumber = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (maxCountNumber < count)
        {
            maxCountNumber = count;
        }
        if (nums[i] == 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }
    }
    return maxCountNumber;
}

int main()
{
    int arr[] = {0, 0, 1, 2, 3, 0, 0, 0, 4, 0, 0, 9, 0, 0, 0,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = maxConsecutiveZeroes(arr, size);
    cout << "max consecutive zero is : " << count;
    return 0;
}
