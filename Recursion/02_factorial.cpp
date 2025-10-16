#include<iostream>
using namespace std;

int calculateFact(int num){
 if(num == 1) return 1;
 return num * calculateFact(num-1);
};

int main(){
    int num = 5;
    int factOfNum = 1;
    int count = calculateFact(num);
    cout<<"factorial is "<<count;
}