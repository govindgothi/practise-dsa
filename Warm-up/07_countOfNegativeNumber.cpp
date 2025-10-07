// write a function that return the number negative number in a array
#include <iostream>

using namespace std;

int searchElement(int arr[], int len){
    int count = 0;
    for (int i = 0; i < len ; i++){
      if(arr[i] < 0){
        count++;
      }
    }
    return count;
}

int main(){
    int arr[] = {1,-1, 3,-4,5,6,7,8,9,-10,-11,12,13};
     int len = sizeof(arr)/sizeof(arr[0]);//we need to send length when we pass array in function in c++
    int countOfNegativeNumber = searchElement(arr,len);
    cout<<"count Of Negative Number : " << countOfNegativeNumber;
    return 0;
}