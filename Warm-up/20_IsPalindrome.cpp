//20_IsPalindrome.cpp

#include<iostream>
using namespace std;

bool isPalidrone(int val){
  if(val == 0) return true;
 int count = 0;
  while(val>0){
    count++;
    val = val/10;
  }
 if(count%2==0){
    return false;
 };
 for(int i = 0; i < count/2;i++){
    if(val){
       
    }
 }


}

int main(){
 int val = 43234;
 bool isPali = isPalidrone(val);
 if(isPali == 1){
    cout<<"This number is palindrome";
 }else{
    cout<<"This number is not palindrome";
 }
}