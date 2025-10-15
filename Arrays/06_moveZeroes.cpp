#include <iostream>
using namespace std;

void moveZeroes(int arr[], int size)
{
    int firstPtr = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[firstPtr] = arr[i];
            firstPtr++;
        }
    }
    for (int i = firstPtr; i < size; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    int arr[] = {1, 0, 0, 2, 0, 0, 3, 4, 0, 5, 0};
    int firstPtr = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    moveZeroes(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}