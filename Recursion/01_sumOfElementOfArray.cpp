#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
        return arr[n];
    return arr[n] + sum(arr, n - 1);
}
int sumOfElement(int arr[], int size)
{
    int total = sum(arr, size - 1);
    return total;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfElement(arr, size);
    cout << "sum of number of array :" << sum;
}