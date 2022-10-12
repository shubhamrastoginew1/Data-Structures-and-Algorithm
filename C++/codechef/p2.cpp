// N boys and NN girls attend a dance class, where NN is odd. For today's practice session, they need to form NN boy-girl pairs.

// The ii-th boy has a happiness value of A_iA 
// i
// ​
//   and the ii-th girl has a happiness value of B_iB 
// i
// ​
//  . A pair consisting of the ii-th boy and the jj-th girl has a happiness value of A_i + B_jA 
// i
// ​
//  +B 
// j
// ​
//  .

// Let the happiness values of the NN pairs be C_1, C_2, \ldots, C_NC 
// 1
// ​
//  ,C 
// 2
// ​
//  ,…,C 
// N
// ​
//  . The dance instructor would like it if many of the pairs have a high happiness value, and passes the task to you — find the maximum possible value of the median of CC, if the boy-girl pairs are chosen optimally.

// Note: The median of a odd-sized list of integers is the middle number when they are sorted. For example, the median of [1][1] is 11, the median of [1, 5, 2][1,5,2] is 22, and the median of [30, 5, 5, 56, 3][30,5,5,56,3] is 55.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of three lines of input.
// The first line of each test case contains a single integer NN.
// The second line of each test case contains NN space-separated integers A_1, A_2, \ldots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   — the happiness values of the boys.
// The third line of each test case contains NN space-separated integers B_1, B_2, \ldots, B_NB 
// 1
// ​
//  ,B 
// 2
// ​
//  ,…,B 
// N
// ​
//   — the happiness values of the girls.
// Output Format
// For each test case, output on a new line the maximum possible median happiness of the NN pairs.

// Constraints
// 1 \leq T \leq 3 \cdot 10^41≤T≤3⋅10 
// 4
 
// 1 \leq N \lt 3\cdot 10^51≤N<3⋅10 
// 5
 
// NN is odd
// 1 \leq A_i, B_i \leq 10^91≤A 
// i
// ​
//  ,B 
// i
// ​
//  ≤10 
// 9
//   for each valid ii
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
    vector<int> a(n);
    vector<int> b(n);
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
	for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        b[i]=x;
    }
	
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
	
	vector<int> half_a,half_b;
	for(int i=n/2;i<n;i++)
	{
	    half_a.push_back(a[i]);
	    half_b.push_back(b[i]);
	}
	reverse(half_b.begin(),half_b.end());
	vector<int> ans;
	for(int i=0;i<half_b.size();i++)
	{
	    ans.push_back(half_b[i]+half_a[i]);
	}
	sort(ans.begin(),ans.end());
	cout<<ans[0]<<"\n";
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
