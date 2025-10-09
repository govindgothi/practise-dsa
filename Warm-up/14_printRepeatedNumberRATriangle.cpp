// 14_printRepeatedNumberRATriangle.cpp
// print print Rigth Angled number Star Triangle 
#include<iostream>
using namespace std;

int main(){
    int row = 4;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<= i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}