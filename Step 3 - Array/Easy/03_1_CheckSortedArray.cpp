//  #Problem:- check if the array is sorted or not 
//  #Tip:- No tips
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool checkSorted(vector <int > nums){
    for (int i =1;i<nums.size();i++){
        if(nums[i-1]>nums[i])return false;
    }
    return true;
}

int main() {
    //Start Coding
    vector<int> nums = {1,2,3,4,5,86,7,8,9};
    cout<<checkSorted(nums);
    return 0;
}