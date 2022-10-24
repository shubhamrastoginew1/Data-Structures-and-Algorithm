

//                                             A. Maxmina

// You have an array a of size n consisting only of zeroes and ones and an integer k. In one operation you can do one of the following:

// Select 2 consecutive elements of a and replace them with their minimum (that is, let a:=[a1,a2,…,ai−1,min(ai,ai+1),ai+2,…,an] for some 1≤i≤n−1). This operation decreases the size of a by 1.
// Select k consecutive elements of a and replace them with their maximum (that is, let a:=[a1,a2,…,ai−1,max(ai,ai+1,…,ai+k−1),ai+k,…,an] for some 1≤i≤n−k+1). This operation decreases the size of a by k−1.
// Determine if it's possible to turn a into [1] after several (possibly zero) operations.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤1000). The description of the test cases follows.

// The first line of each test case contains two integers n and k (2≤k≤n≤50), the size of array a and the length of segments that you can perform second type operation on.

// The second line contains n integers a1,a2,…,an (ai is 0 or 1), elements of array a.

// Output
// For each test case, if it is possible to turn a into [1], print "YES", otherwise print "NO".




// Code ...


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int gcd(int a, int b) {
	return b==0? a : gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n) {  // A number is Prime number or not.
	if(n < 2) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

long long int factorial(int n) {
	return n * factorial(n-1);
}

void solve() {
 
 int n, k;
 cin >> n >> k;
 
 vector<int>v(n);
 for(auto &i : v) cin >> i;
  
 int cnt = 0;
  
 for(auto i : v) {
   if(i) cnt++;
 }
  
 if(!cnt) cout << "NO" << endl;
 else cout << "YES" << endl;
 
}

int main()
{
	fastIO();

	// freopen("input.txt", 'r');
	// freopen("output.txt", 'w');

	int t ;
	cin >> t;
  
	while(t--) {
	  solve();
	}
  
	return 0;
}
