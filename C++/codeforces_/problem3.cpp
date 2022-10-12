// The girl named Masha was walking in the forest and found a complete binary tree of height n and a permutation p of length m=2n.

// A complete binary tree of height n is a rooted tree such that every vertex except the leaves has exactly two sons, and the length of the path from the root to any of the leaves is n. The picture below shows the complete binary tree for n=2.

// A permutation is an array consisting of n different integers from 1 to n. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not (2 occurs twice), and [1,3,4] is also not a permutation (n=3, but there is 4 in the array).

// Let's enumerate m leaves of this tree from left to right. The leaf with the number i contains the value pi (1≤i≤m).

// For example, if n=2, p=[3,1,4,2], the tree will look like this:


// Masha considers a tree beautiful if the values in its leaves are ordered from left to right in increasing order.

// In one operation, Masha can choose any non-leaf vertex of the tree and swap its left and right sons (along with their subtrees).

// For example, if Masha applies this operation to the root of the tree discussed above, it will take the following form:


// Help Masha understand if she can make a tree beautiful in a certain number of operations. If she can, then output the minimum number of operations to make the tree beautiful.

// Input
// The first line contains single integer t (1≤t≤104) — number of test cases.

// In each test case, the first line contains an integer m (1≤m≤262144), which is a power of two  — the size of the permutation p.

// The second line contains m integers: p1,p2,…,pm (1≤pi≤m) — the permutation p.

// It is guaranteed that the sum of m over all test cases does not exceed 3⋅105.

// Output
// For each test case in a separate line, print the minimum possible number of operations for which Masha will be able to make the tree beautiful or -1, if this is not possible.

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


pair<ll, ll> tree(ll s,ll e,vector<ll>& arr, ll& res)
{
	if(s==e) return {arr[s],arr[e]};

	ll mid=s+(e-s)/2;

	pair<ll, ll> p = tree(s,mid,arr,res);
	pair<ll, ll> q = tree(mid+1,e,arr,res);

	if(q.first<p.second)
	{
		res++;
		swap(p,q);
	}
	if(p.second==q.first-1 && q.second-p.first==(e-s)) return {p.first,q.second};
	else
	{
		res=minf;
		return {p.first,q.second};
	}
}
void solve()
{
	ll m;
	cin>>m;
	vector<ll> arr(m);
	input(arr);

	ll res=0;
	tree(0,m-1,arr,res);

	if(res<0) cout<<-1<<nline;
	else cout<<res<<nline;
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