//  #Problem:- find maximum consecative 1 in binaray array
//  #Tip:- No tips
//  #Time Complexity:- o(N)

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int consecative1(vector<int>& nums){
    int cnt = 0;
    int maximum = 0;
    for(int i =0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
            maximum= max(maximum,cnt);
        }else{
            cnt=0;
        }
    }
    return maximum;

}
int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum = ((N*(N+1)) / 2);
    cout<<sum<<" ";
    for(int i = 0;i < N; i++ ){
        sum -= A[i];
        cout<<sum<<" ";
    }
    return sum;
}
int main() {
    vector<int> nums= {0,1,1,0,0,1,1,1,0,0,1,1,1,1};
    // cout<<consecative1(nums);
    int a[]={1,4,3};
    cout<<missingNumber(a,4);
    return 0;
}