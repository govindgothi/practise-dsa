// 01_lenghtOfLastWord.cpp
#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWOrd(string s){
    int len = s.length()-1;
    int count = 0;
    while(len>=0){
        if(s[len] != ' '){
         count++;
        }else if(count > 0) {
          break;
        }
        len--;
    }
    return count;
}
// this also good but not as much as upper
int lengthOfWordSecondApp(string s){
    int len = s.length()-1;
    int count = 0;
    while(len>=0){
      if(s[len] == ' '){
        len--;
      }else{
        break;
      }
    }
     while(len>=0){
      if(s[len] != ' '){
        count++;
      }else{
        break;
      }
      len--;
    }
    return count;
}
int main(){
 string str = "hello world dkvdsv4";
 int lengthOfWord = lengthOfLastWOrd(str);
 cout<<"count of last word is :"<<lengthOfWord<<endl;
 int secondApp = lengthOfWordSecondApp(str);
 cout<<"count of last word from second approad is :"<<secondApp;
}