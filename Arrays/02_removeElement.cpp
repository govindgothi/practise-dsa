#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr, int val)
{
    int size = arr.size();
    int firstPtr = 0;
    for(int i = 0; i < size;i++){
        if(arr[i] != val){
            arr[firstPtr] = arr[i];
            firstPtr++;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {2, 3, 3, 2};
    int val = 3;
    cout << "Result: ";
    vector<int> uniqueArr = removeDuplicate(arr, val);

    cout << "Result: ";
    for (int i = 0; i < uniqueArr.size(); i++)
    {
        cout << uniqueArr[i] << " ";
    }
    cout << endl;
}
