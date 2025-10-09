// 16_rightAlignedAngle.cpp

#include<iostream>
using namespace std;

int main(){
     int row = 5;
    for(int i = 0; i <= row; i++){
        for(int j = 0; j <= row;j++){
            if(row-i < j){
                cout<<"*"<<" ";
            }else{
                 cout<<"  ";
            }
        }
        cout<<endl;
    }
}