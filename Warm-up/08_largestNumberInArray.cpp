// find largest number in array 
#include<iostream>
#include<climits>
using namespace std;

int largestNumberInArray(int arr[],int len){
 int max_num = INT_MIN;
 for(int i = 0; i < len; i++){
    if(arr[i]>max_num){
        max_num = arr[i];
    }
 }
 return max_num;
}

int main(){
  int arr[] = {1,2,34,5,6,7,8,9,0,1,23,4,555,66,77,8,34,5};
  int len = sizeof(arr)/sizeof(arr[0]);
  int result = largestNumberInArray(arr,len);
  cout<<"print largest number : "<<result;
}