// Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.

// Code:
class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       
       vector<int> ans;
       ans.push_back(a[0]);
       
       for(int i=1;i<n;i++)
       {
           if(a[i]>ans.back()) ans.push_back(a[i]);
           else
           {
               int idx = lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
               ans[idx] = a[i];
           }
       }
       return ans.size();
    }
};