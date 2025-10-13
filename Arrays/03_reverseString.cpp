// 03_reverseString.cpp
// reverse array of string without using or create another array

#include<iostream>
using namespace std;

void reverseString(char nums[],int size){
    if(size/2)
    for(int i = 0;i < size/2;i++){
         char first = nums[i];
         char last =  nums[size-i-1];
         nums[i] = last;
         nums[size-i-1] = first;
    }
}

int main(){
    char arr[] = {'a','b','c','d','e','f','h'};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseString(arr,size);
    int r = 0;
    while (size>r)
    {
        cout<<arr[r]<<" ";
        r++;
    }
    
}