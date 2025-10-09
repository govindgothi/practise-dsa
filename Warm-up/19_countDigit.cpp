// count number of digit
#include<iostream>
using namespace std;

int countDigit(int digit){
  int count = 0;
  while(digit>0){
    count++;
    digit = digit/10;
  }
 return count;
}

int main(){
   int digit = 100;
   int count = countDigit(digit);
   cout<<"number of digit is : "<<count<<endl;
}