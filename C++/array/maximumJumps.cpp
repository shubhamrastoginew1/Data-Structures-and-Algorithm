/*Given an array arr[] where each element represents the max number of steps that can be made
forward from that index. The task is to find the minimum number of jumps to reach the end of the
array starting from index 0. If the end isn’t reachable, return -1.*/

#include <bits/stdc++.h>
using namespace std;
 
int minJumps(int arr[], int n)
{
    if (n == 1)
        return 0;
 
    
    int res = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        if (i + arr[i] >= n - 1) {
            int sub_res = minJumps(arr, i + 1);
            if (sub_res != INT_MAX)
                res = min(res, sub_res + 1);
        }
    }
 
    return res;
}
 
int main()
{
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to";
    cout << " reach the end is " << minJumps(arr, n);
    return 0;
}