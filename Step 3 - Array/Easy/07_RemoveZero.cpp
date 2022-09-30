//  #Problem:- remove Zero from the array 
//  #Tip:- No tips
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**********Brute Force***********/
// for every index i find elegiable candidate for that position with the help of j
// two pointer approach 
// TC - O(N)
// SC - O(1)

// void RemoveZero(vector<int>& nums){
//     int n = nums.size();
//     int i = 0;
//     int j = 0;
//     while(j<n){
//         if(nums[j]!=0){
//             nums[i]=nums[j];
//             i++;
//             j++;
//         }else{
//             j++;
//         }
//     }
//     while(i<n)nums[i++]=0;
// }

/**********Optimized Approach***********/
// just like brute force only use swap method
// this is save extra loop
// TC - O(N)
// SC - O(1)

void RemoveZero(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    int j = 0;
    while(j<n){
        if(nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }else{
            j++;
        }
    }
    // while(i<n)nums[i++]=0;
}

int main() {
    //Start Coding
    vector<int> nums = {0,1,0,3,12};
    RemoveZero(nums);
    for(auto it:nums)cout<<it<<" ";
    return 0;
}