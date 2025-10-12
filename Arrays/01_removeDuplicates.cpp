// remove dupliacate
// leetcode array section 26 
#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicates( vector<int> &arr) {
    int size = arr.size();
    int firstPrt = 0;
    for (int i = 0; i < size; i++) {
       if(arr[i] >  arr[firstPrt]){
        firstPrt++;
        arr[firstPrt] = arr[i];
       }
    }
    cout<<endl;
    return arr;  // returns an array-like vector
}

int main() {
    vector<int> arr = {-2,-2,-1, 0,1,1,2,3,4,4,5,5,5,7,8,9,9};
    vector<int> uniqueArr = removeDuplicates(arr);
    for(int i=0; i < uniqueArr.size();i++){
        cout<<uniqueArr[i]<<" ";
    }
}

 