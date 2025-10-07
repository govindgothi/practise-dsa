// write a function that searches for an element in an array and return the index,
// if the element is not present then just resturn -1
#include <iostream>
using namespace std;

int searchElement(int arr[], int len ,int val){
    int index = -1;
    for (int i = 0; i < len ; i++){
      if(arr[i] == val){
        index = i;
        break; 
      }
    }
    return index;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int val = 14;
     int len = sizeof(arr)/sizeof(arr[0]);//we need to send length when we pass array in function in c++
    int findIndex = searchElement(arr,len,val);
    if(findIndex == -1){
      cout<<"value is not present : "<<findIndex;
      return 0;
    }
    cout<<"find index : "<<findIndex;
    return 0;
}