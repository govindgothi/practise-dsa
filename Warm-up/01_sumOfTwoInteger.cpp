// calculate sum of two integer
#include <iostream>
using namespace std;

int sumOfInteger(int first, int second) {
  return first + second;
}
#include<iostream>
using namespace std;

int sumOfInteger(int first, int second){
  return first + second ;
}

int main(){
  int firstNum;
  int secondNUm;

  cout<<"Enter first number :";
  cin>>firstNum;
  cout<<endl<<'Enter second number :';
  cin>>secondNUm;
  int result = sumOfInteger(firstNum,secondNUm);
  cout<<'sum of two number :'<<result;
  return 0 ;
}
int main() {
  int firstNum;
  int secondNum;

  cout << "Enter first number: ";
  cin >> firstNum;

  cout << "Enter second number: ";
  cin >> secondNum;

  int result = sumOfInteger(firstNum, secondNum);
  cout << "Sum of two numbers: " << result << endl;

  return 0;
}
