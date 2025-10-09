// there many corner cases we need to remember 
//1. if array is empty,  2. if array have duplicate value,
// 3. if array have only one value , 4. if array have negative number any other 
#include<iostream>
#include<climits>
using namespace std;

int secondLargestNumberInArray(int arr[],int len){
 int firstLarget = INT_MIN;
 int secondLargest;
 for(int i = 0; i < len-1;i++){
    if(arr[i]>firstLarget){
        secondLargest = firstLarget;
        firstLarget = arr[i];
    }else if(arr[i]>secondLargest && arr[i] != firstLarget){//remove duplication
        secondLargest = arr[i];
    }
}
 return secondLargest;
}

int main(){
    int arr[] = {1,23,4,5,6,7,8,922,3445,56,33,222,543,32,55,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int result = secondLargestNumberInArray(arr,len);
    cout<<"second largest number in array : "<<result;
}