// 04_bestTimeToSellStocks.cpp

#include<iostream>
using namespace std;
int countMaxProfit(int price[],int size){
 int maxProfit = 0;
 int smallestVal = price[0];
 for(int i = 0; i < size;i++){
   if(smallestVal > price[i]){
    smallestVal = price[i];
   }
   if(price[i] - smallestVal > maxProfit){
     maxProfit = price[i] - smallestVal;
   }
 } 
 cout<<"smallest val"<<smallestVal<<endl;
 return maxProfit; 
}
int main(){
    int price[] = {-1,3,6,4,5,8,-2,4,3,6,9};
    int size = sizeof(price)/sizeof(price[0]);
    int maxProfit = countMaxProfit(price,size);
    cout<<"the is max profit : "<<maxProfit;
}