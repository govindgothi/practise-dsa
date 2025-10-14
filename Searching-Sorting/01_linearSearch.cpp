// 01_linearSearch.cpp

#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int val){
 if(size == 0) return -1;
 for(int i = 0;i<size;i++){
    if(arr[i] == val){
        return i;
    }
 }
 return -1;
}

int main(){
  int arr[] = {3,2,4,2,2,3,45,6,7,9,10,14};
  int val = 45;
  int size = sizeof(arr)/sizeof(arr[0]);
  int index = linearSearch(arr,size,val);
  if(index == -1){
    cout<<"The target value is not found ";
    return 0;
  }
  cout<<"result index val is : "<<index;
  return 0;
}