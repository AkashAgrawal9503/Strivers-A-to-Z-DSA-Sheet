//  #Problem:- find second larget and second smallest element in array
//  #Tip:- Try to solve it without sorting
//  #Time Complexity:- o(N)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/**********Brute Force***********/

// brute force is sorting 

// this will work if there are no duplicate element
//TC -O(NlogN) <-- because of sorting
// SC - O(1)

// void secondLargetAndSmallest(vector<int> nums){
//     if(nums.size()==0 or nums.size()==1)cout<< -1;
//     sort(nums.begin(),nums.end());
//     cout<< "second smallest "<< nums[1]<<" & second larget "<<nums[nums.size()-2];
// }

/**********Optimized Approach***********/

// do it by triversal 
// TC - O(N)
// SC - O(1)

// void secondLargetAndSmallest(vector<int> nums){
//     int smallest = INT_MAX, second_smallest = INT_MAX;
//     int largest = INT_MIN, second_largest = INT_MIN;
//     for(auto it:nums){
//         smallest = min (smallest,it);
//         largest = max (largest,it);
//     }
//     for(auto it: nums){
//         if(it<second_smallest && it>smallest) 
//             second_smallest = it;
//         if(it>second_largest && it<largest) 
//             second_largest = it;
//     }
//     cout<< "second smallest "<< second_smallest<<" & second larget "<<second_largest;
    
// }


/**********Best Approach***********/

// do it in single triversal 
// TC - O(N)
// SC - O(1)

void secondLargetAndSmallest(vector<int> nums){
    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;
   
    for(auto it: nums){
        if(it<smallest){
            second_smallest = smallest;
            smallest = it;
        }
        else if(it<second_smallest && it>smallest) {
            second_smallest = it;
        }

        if(it>largest){
            second_largest = largest;
            largest = it; 
        }   
        else if(it>second_largest && it<largest) 
            second_largest = it;
    }
    cout<< "second smallest "<< second_smallest<<" & second largest "<<second_largest;
    
}


int main() {
    //Start Coding
    vector<int> nums={12, 35, 1, 10, 34, 1};
    secondLargetAndSmallest(nums);
    return 0;
}