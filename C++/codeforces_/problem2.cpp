// A sequence of n numbers is called permutation if it contains all numbers from 1 to n exactly once. For example, the sequences [3,1,4,2], [1] and [2,1] are permutations, but [1,2,1], [0,1] and [1,3,4] are not.

// For a given number n you need to make a permutation p such that two requirements are satisfied at the same time:

// For each element pi, at least one of its neighbors has a value that differs from the value of pi by one. That is, for each element pi (1≤i≤n), at least one of its neighboring elements (standing to the left or right of pi) must be pi+1, or pi−1.
// the permutation must have no fixed points. That is, for every i (1≤i≤n), pi≠i must be satisfied.
// Let's call the permutation that satisfies these requirements funny.

// For example, let n=4. Then [4,3,1,2] is a funny permutation, since:

// to the right of p1=4 is p2=p1−1=4−1=3;
// to the left of p2=3 is p1=p2+1=3+1=4;
// to the right of p3=1 is p4=p3+1=1+1=2;
// to the left of p4=2 is p3=p4−1=2−1=1.
// for all i is pi≠i.
// For a given positive integer n, output any funny permutation of length n, or output -1 if funny permutation of length n does not exist.

// Input
// The first line of input data contains a single integer t (1≤t≤104) — the number of test cases.

// The description of the test cases follows.

// Each test case consists of f single line containing one integer n (2≤n≤2⋅105).

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, print on a separate line:

// any funny permutation p of length n;
// or the number -1 if the permutation you are looking for does not exist.


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
	vector<ll> ans(n);
	if(n==3) cout<<-1<<nline;
	else if(n==2) cout<<2<<" "<<1<<nline;
	else
	{
		ans[0]=n-1;
		ans[1]=n;

		ll j=1;
		rep(i,2,n)
		{
			ans[i]=j;
			j++;
		}

		rep(i,0,n) cout<<ans[i]<<" ";
		cout<<nline;
	}
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