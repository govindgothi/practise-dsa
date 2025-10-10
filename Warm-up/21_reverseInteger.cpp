// 21_reverseInteger.cpp

#include<iostream>
using namespace std;

int reverseInteger(int val){
  if(val<=0) return 0;
  int rev = 0;
  while(val>0){
    rev = rev * 10  +  (val%10);
    val = val/10;
  }
 return rev;
}

int main(){
    int val = 123456412;
    int reverseVal = reverseInteger(val);
    cout<<"the reverse value is "<<reverseVal;
}