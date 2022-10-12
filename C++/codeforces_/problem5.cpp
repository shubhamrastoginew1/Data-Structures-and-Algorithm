// An array b of length m is good if for all i the i-th element is greater than or equal to i. In other words, b is good if and only if bi≥i for all i (1≤i≤m).

// You are given an array a consisting of n positive integers. Find the number of pairs of indices (l,r), where 1≤l≤r≤n, such that the array [al,al+1,…,ar] is good.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤2⋅105). Description of the test cases follows.

// The first line of each test case contains an integer n (1≤n≤2⋅105), the length of the array a.

// The second line of each test case contains n space-separated integers a1,a2,…,an (1≤ai≤n), representing the array a.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, print the number of suitable pairs of indices.

// Code:

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pob pop_back()
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define u_m unordered_map<ll,ll>
#define u_s unordered_set<ll>
#define prq priority_queue<ll>
#define psq priority_queue<ll,vector<ll>,greater<ll>>
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define input(x) {for(auto &i : x) cin>>i;}
#define input1(x) {rep(i,1,n+1) cin>>x[i];}
#define output(x) {for(auto i : x) cout<<i<<" ";}
#define inf INT_MAX
#define minf INT_MIN
#define MOD 1000000007
#define all(x) x.begin(),x.end()
#define nline "\n"
#define yes cout<<"YES"<<nline;
#define no cout<<"NO"<<nline;

void solve()
{
	ll n;
	cin>>n;
	vector<ll> arr(n);
	input(arr);

	ll j=0,ans=0,k=1;
	
	rep(i,0,n)
	{
		while(j<n && arr[j]>=k)
		{
			j++;
			k++;
		}
		ans+=(j-i);
		k--;
	}
	cout<<ans<<nline;

}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}