//  #Problem:- Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

//there  may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
//  #Tip:- No tips
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool sortedArray(vector<int> nums){
    int x = 0;
    int n = nums.size();
    for(int i = 1;i<n;i++){
        x++;
        if(nums[i-1]>nums[i])break;
    }

    if(x==n-1)return true;

    for (int i = 1; i < x; i++)
    {
        if(nums[i-1]>nums[i])return false;
    }
    for (int i = x+1; i < n; i++)
    {
        if(nums[i-1]>nums[i])return false;
    }
    if(nums[0]<nums[n-1])return false;
    return true;
}

int main() {
    //Start Coding
    vector<int> nums = {1,3,4};
    cout<<sortedArray(nums);
    return 0;
}