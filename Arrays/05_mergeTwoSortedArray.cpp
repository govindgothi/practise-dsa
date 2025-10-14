// 05_mergeTwoSortedArray.cpp
#include<iostream>
using namespace std;

int mergeTwoSortedArray(int nums1[],int m,int nums2[], int n){
    m=m-n;
    int ptr1 = m-1;
    int ptr2 = n-1;
    int i = m + n- 1;
    while (ptr2 >= 0){
     if(ptr1 >=0 && nums1[ptr1] > nums2[ptr2]){
      nums1[i--] = nums1[ptr1--];
     }else{
        nums1[i--] = nums2[ptr2--];
     }
    }
    for(int i = 0; i < m+n; i++){
        cout<<" "<<nums1[i];
    }
    return 0;
}
    
int main(){
    int nums1[] = {5,5,5,6,7,0,0,0,0};
    int m = sizeof(nums1)/sizeof(nums1[0]);
    int nums2[] = {1,2,3,4};
    int n = sizeof(nums2)/sizeof(nums2[0]);
    int nums = mergeTwoSortedArray(nums1,m,nums2,n);
    return 0;
}