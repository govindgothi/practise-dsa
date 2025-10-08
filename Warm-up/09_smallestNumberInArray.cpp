// find smallest number in array 
#include<iostream>
#include<climits>
using namespace std;

int smallestNumberInArray(int arr[],int len){
 int min_num = INT_MAX;
 for(int i = 0; i < len; i++){
    if(arr[i] < min_num){
        min_num = arr[i];
    }
 }
 return min_num;
}

int main(){
  int arr[] = {1,2,34,5,6,7,8,9,0,1,23,4,555,66,77,8,34,5};
  int len = sizeof(arr)/sizeof(arr[0]);
  int result = smallestNumberInArray(arr,len);
  cout<<"print smallest number : "<<result;
}