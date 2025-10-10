//20_IsPalindrome.cpp

#include<iostream>
using namespace std;

bool checkPalindrome(int val){
   if(val == 0) return true;
   if(val < 0) return false;
   int copyVal = val;
   int reverseVal = 0;
   while(val>0){
     int rem = val%10;
     reverseVal = reverseVal*10 + rem;
     val = val/10;
   }
   if(reverseVal == copyVal){
      return true;
   }else{
      return false;
   }
}

int main(){
   int val = 1233421;
   bool isPalindrome = checkPalindrome(val);
   if(isPalindrome == 1){
      cout<<"The value is PALINDROME";
      return 1;
   }else{
      cout<<"The value is NOT PALINDROME";
      return 0;
   }
}