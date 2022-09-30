//  #Problem:- remove duplicate from soted array 
//  #Tip:- IMP Must solve question
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**********Brute Force***********/
// using Set we can get unique and sorted array if extra space is allowed

/**********Optimized Approach***********/

// insertIndex is index where we insert next large element and do ++ do get till this point my array is sorted and have unique element
// index i is used to find next unique element which we will insert at insert index
//TC - O(N);
//SC - O(1);
int removeDuplicates(vector<int>& nums) {
    int insertIndex = 1;
    for(int i = 1;i<nums.size();i++){
        if(nums[i-1]!=nums[i]){
            nums[insertIndex]=nums[i];
            insertIndex++;
        }
    }
    return insertIndex;
}

int main() {
    //Start Coding
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(nums);
    // for(auto it:nums)cout<<it<<" ";
    for(int i = 0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}