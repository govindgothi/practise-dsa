
#include<iostream>
using namespace std;

void printEvenNumber(int arr[],int len){
 for(int i = 0; i<len; i++){
    if(arr[i]%2 == 0){
        cout<<arr[i]<<" ";
    }
 }
}

int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int len = sizeof(arr)/sizeof(arr[0]);
printEvenNumber(arr,len);
return 0 ;
}