// Two T-shirt sizes are given: a and b. The T-shirt size is either a string M or a string consisting of several (possibly zero) characters X and one of the characters S or L.

// For example, strings M, XXL, S, XXXXXXXS could be the size of some T-shirts. And the strings XM, LL, SX are not sizes.

// The letter M stands for medium, S for small, L for large. The letter X refers to the degree of size (from eXtra). For example, XXL is extra-extra-large (bigger than XL, and smaller than XXXL).

// You need to compare two given sizes of T-shirts a and b.

// The T-shirts are compared as follows:

// any small size (no matter how many letters X) is smaller than the medium size and any large size;
// any large size (regardless of the number of letters X) is larger than the medium size and any small size;
// the more letters X before S, the smaller the size;
// the more letters X in front of L, the larger the size.
// For example:

// XXXS < XS
// XXXL > XL
// XL > M
// XXL = XXL
// XXXXXS < M
// XL > XXXS
// Input
// The first line of the input contains a single integer t (1≤t≤104) — the number of test cases.

// Each test case consists of one line, in which a and b T-shirt sizes are written. The lengths of the strings corresponding to the T-shirt sizes do not exceed 50. It is guaranteed that all sizes are correct.

// Output
// For each test case, print on a separate line the result of comparing a and b T-shirt sizes (lines "<", ">" or "=" without quotes).



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
	string a,b;
	cin>>a>>b;

	ll n=a.size(),m=b.size();

	char st1 = a[n-1];
	char st2 = b[m-1];

	ll count1=0,count2=0;

	rep(i,0,n)
	{
		if(a[i]=='X') count1++;
	}
	rep(i,0,m)
	{
		if(b[i]=='X') count2++;
	}

	if(st1=='S' && st2=='L') cout<<"<"<<nline;
	else if(st1=='L' && st2=='S') cout<<">"<<nline;
	else if(st1=='S' && st2=='M') cout<<"<"<<nline;
	else if(st1=='M' && st2=='S') cout<<">"<<nline;
	else if(st1=='M' && st2=='L') cout<<"<"<<nline;
	else if(st1=='L' && st2=='M') cout<<">"<<nline;
	else if(st1=='S' && st2=='M') cout<<"<"<<nline;
	else if(st1=='S' && st2=='S')
	{
		if(count1==count2) cout<<"="<<nline;
		else if(count1>count2) cout<<"<"<<nline;
		else cout<<">"<<nline;
	}
	else if(st1=='L' && st2=='L')
	{
		if(count1==count2) cout<<"="<<nline;
		else if(count1>count2) cout<<">"<<nline;
		else cout<<"<"<<nline;
	}
	else cout<<"="<<nline;
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
