//  #Problem:- intersection of 2 array
//  #Tip:- No tips
//  #Time Complexity:- o(N*M)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**********Brute Force***********/
// for every arr1 ith index we search it in whole arr2 for same element
// but for example in arr1 we have 3 and 3 two time and in arr 2 we have element 3 only one time this technique will give us 3 3 two times in answer 
// so because of this we use visited array of size arr2 
// for exaple arr1 = {1,3,3,4} and arr2 = {3,3,5};
// one first 3 of array 1 match with arr2's first 3 
// we make visited array [0,0,0]to [1,0,0]next time if 2nd 3 of arr1 try to search it will not pick 1st 3 of arr2 as it already taken.

vector<int> intersection(vector<int> &A,vector<int>&B,int n,int m){
    vector < int > ans;
  vector < int > visited(B.size(), 0); // to maintain visited 
  int i = 0, j = 0;
  for (i = 0; i < A.size(); i++) {
    for (j = 0; j < B.size(); j++) {

      if (A[i] == B[j] && visited[j] == 0) { 
      //if element matches and has not been matched with any other before
        ans.push_back(B[j]);
        visited[j] = 1;

        break;
      } else if (B[j] > A[i]) break; 
        //because array is sorted , element will not be beyond this
    }
  }
  return ans;
}

/**********Optimized Approach***********/
// merging two sorted array type answer 

vector<int> intersection(vector<int> &A,vector<int>&B,int n,int m){

vector < int > ans;

  int i = 0, j = 0; // to traverse the arrays

  while (i < A.size() && j < B.size()) {
    if (A[i] < B[j]) { //if current element in i is smaller
      i++;
    } else if (B[j] < A[i]) {
      j++;
    } else {
      ans.push_back(A[i]); //both elements are equal
      i++;
      j++;
    }
  } return ans;
}
int main() {
        
    return 0;
}