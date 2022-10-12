// Chef has a string AA (containing lowercase Latin letters only) of length NN where NN is even. He can perform the following operation any number of times:

// Swap A_iA 
// i
// ​
//   and A_{i + 2}A 
// i+2
// ​
//   for any 1 \le i \le (N - 2)1≤i≤(N−2)
// Determine if Chef can convert string AA to a palindromic string.

// Note: A string is called a palindrome if it reads the same backwards and forwards. For example, \texttt{noon}noon and \texttt{level}level are palindromic strings but \texttt{ebb}ebb is not.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer NN — the length of the string AA.
// The second line of each test case contains a string AA of length NN containing lowercase Latin letters only.
// Output Format
// For each test case, output YES if Chef can convert the string AA to a palindromic string. Otherwise, output NO.

// You may print each character of YES and NO in either uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

// Code:
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string even_char="",odd_char="";
    for(int i=0;i<n;i++)
    {
        if(i%2==0) even_char+=s[i];
        else odd_char+=s[i];
    }
    sort(even_char.begin(),even_char.end());
    sort(odd_char.begin(),odd_char.end());
    if(even_char==odd_char) cout<<"YES\n";
    else cout<<"NO\n";
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
