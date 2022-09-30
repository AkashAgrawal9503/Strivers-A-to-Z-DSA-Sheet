//  #Problem:- union
//  #Tip:- No tips
//  #Time Complexity:- o(N+M)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**********Brute Force***********/
//using set we can solve this problem 
// unique and distinct element 
// we not use unorder_map cause we want distinct element or both the array but in sorted order in such condition we use set or map as they store element in sorted order

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  set < int > s;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    s.insert(arr1[i]);
  for (int i = 0; i < m; i++)
    s.insert(arr2[i]);
  for (auto & it: s)
    Union.push_back(it);
  return Union;
}

/**********Optimized Approach***********/
// similar as merging two sorted array 

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //return vector with correct order of elements
        vector<int> ans;
        int i = 0,j = 0;
        if(arr1[i]<arr2[j])ans.push_back(arr1[i]);
        else ans.push_back(arr2[j]);
        while(i<n && j<m){
            if(arr1[i] < arr2[j]){
                if(arr1[i]!=ans.back())
                ans.push_back(arr1[i]);
                i++;
            }
            else if (arr1[i] > arr2[j]){
                if(arr2[j]!=ans.back())
                ans.push_back(arr2[j]);
                j++;
            }
            else{
                if(arr1[i]!=ans.back())
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        while(i<n){
            if(arr1[i]!=ans.back())
            ans.push_back(arr1[i++]);
            else i++;
        }
        while(j<m){
            if(arr2[j]!=ans.back())
            ans.push_back(arr2[j++]);
            else j++;
        }
        return ans;
    }

int main() {
    //Start Coding
    return 0;
}