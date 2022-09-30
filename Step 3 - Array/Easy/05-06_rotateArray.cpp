//  #Problem:- Standard Problem to solve- rorate array k times(right)
//  #Tip:- divide array into 2 and then rorate it 3 time 1st section 2nd section and whole array 
//  #Time Complexity:- o(N)


#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

/**********Brute Force***********/
// using extra space 
// devide array into 2 and then push 2nd section inside extra array
// then push 1st section inside extra array 
// in last copy whole extra array inside main one
//TC- O(N)
//SC - O(N)

// void rotate(vector<int>& nums, int k) {
// // 1st approach
//         int n = nums.size();
//         if(n==1)return;
//         if(k>n){k = k%n;}
//         vector<int> auxilaryArray;
//         for(int i = n-k;i<n ;i++){
//             auxilaryArray.push_back(nums[i]);
//         }
//         for(int i =0;i<n-k;i++){
//             auxilaryArray.push_back(nums[i]);
//         }
//         for(int i =0;i<n;i++){
//             nums[i]=auxilaryArray[i];
//         }
// }

/**********Optimized Approach***********/
// we can do it without using extra space literly rotating array k time 
// but Time complaxity is issue is 
//TC - O(N*K)
// SC - O(1)

// void rotate(vector<int>& nums, int k) {
//     // 2nd approach
//         int first;
//         int n = nums.size();
//         for(int i =0;i<k;i++){
//             first = nums[n-1];
//             for(int j=n-1;j>0;j--){
//                 nums[j]=nums[j-1];
//             }
//             nums[0]=first;
//         }
        
// }

/**********Best Approach***********/

// divide array into 2 section at pivit point k and then rorate it 3 time 
//1st section revere it 
//2nd section reverse it and 
//whole array reverse it
// TC -O(N)
// SC - O(1)

void reverse(vector <int>& nums, int start, int end){
        while(start<=end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        
        // 3rd approach
        
        int n = nums.size();
        if(k>n)k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
            
    }

int main() {
    vector<int> nums={-1,-100,3,9};
    int k =2;
   rotate(nums,k);
    for(auto it: nums)
    cout<<it<<" ";
    return 0;
}