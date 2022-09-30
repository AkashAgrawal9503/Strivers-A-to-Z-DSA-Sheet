//  #Problem:- linear search 
//  #Tip:- No tips
//  #Time Complexity:- o(N)

/**********Brute Force***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**********Optimized Approach***********/

int linearSearch(vector<int>nums, int k ){
    for(int i = 0;i<nums.size();i++){
        if(nums[i]==k)return i;
    }
    return -1;
}

int main() {
    vector<int> nums={1,2,3,8,5,9,5};
    int k = 5;
    cout<<linearSearch(nums,k);
    return 0;
}