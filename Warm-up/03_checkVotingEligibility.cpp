#include<iostream>
using namespace std;

bool isEligibleForVote(int age){
if(age>18){
  return true;
}else{
  return false;
}
}

int main(){
 int age ;
 cout<<"Enter age :";
 cin>>age;
 bool flag = isEligibleForVote(age) ;
 if(flag == 0){
 cout<<"You are NOT ELIGIBLE for voting";
 return 0;
 }
 cout<<"You are ELIGIBLE for voting";
 return 0;
}