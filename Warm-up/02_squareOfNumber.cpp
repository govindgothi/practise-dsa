// calculate square of number integer
#include <iostream>
using namespace std;

int squareOfNumber(int num) {
  return num * num;
}


int main(){
  int num;
  cout<<"Enter number :";
  cin>>num;
  int result = squareOfNumber(num);
  cout<<"square of number : "<<result;
  return 0 ;
}