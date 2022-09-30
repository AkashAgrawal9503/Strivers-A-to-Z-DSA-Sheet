//  #Problem:- missing element
//  #Tip:- No tips
//  #Time Complexity:- o()

/**********Brute Force***********/
/**********Optimized Approach***********/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//Paste LeadCode Solution Here
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
    //Start Coding
    return 0;
}