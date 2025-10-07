//return is number is even or odd;
#include<iostream>
using namespace std;

bool checkOddEven(int num){
    if(num%2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    bool isEven = checkOddEven(num);
    if(isEven){
     cout<<"number is EVEN";
     return 0;
    }
    cout<<"number is ODD";
    return 0;
}