// A certain parallel universe has exactly NN people living in it.

// The ii-th of these NN people claims that they are the parent of exactly A_iA 
// i
// ​
//   of these NN people.

// However, some of these people might be lying — the ii-th person may be either telling the truth (in which case they have exactly A_iA 
// i
// ​
//   children) or lying (in which case they can have any number of children).

// It is known that each person has at most one parent. Further, as one would expect, it is not allowed for a person's child to also be their ancestor.

// What is the maximum possible number of truth-tellers in this universe?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer NN, the number of people.
// The second line of each test case contains NN space-separated integers A_1, A_2, \ldots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  .
// Output Format
// For each test case, output on a new line the maximum number of people that can be telling the truth.

// Constraints
// 1 \leq T \leq 4 \cdot 10^41≤T≤4⋅10 
// 4
 
// 1 \leq N \leq 3\cdot 10^51≤N≤3⋅10 
// 5
 
// 0 \leq A_i \lt N0≤A 
// i
// ​
//  <N
// The sum of NN across all test cases won't exceed 3 \cdot 10^53⋅10 
// 5
//  .

// Code:
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    sort(arr.begin(),arr.end());
    int ans=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=n) break;
        ans++;
    }
    cout<<ans<<"\n";
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
