//  #Problem:- find maximum element
//  #Tip:- trivers array
//  #Time Complexity:- o(N)



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**********Brute Force***********/

//sort array and return last element
// TC - O(NlogN) -- because of sorting

// int largetElement(vector<int> nums){
//     sort(nums.begin(),nums.end());
//     // return nums[nums.size()-1];
//     return nums.back();
// }

/**********Optimized Approach***********/

// triverse whole array and which ever element is greater than maxi store in maxi

int largestElement(vector<int> nums){
    int maxi =-1;
    for(auto it: nums){
        maxi = max(it,maxi);
    }
    return maxi;

}

int main() {
    //Start Coding
    vector<int> nums={4,5,3,69,8};
    cout<<largestElement(nums);
    return 0;
}