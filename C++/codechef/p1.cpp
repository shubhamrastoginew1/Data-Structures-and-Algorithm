// Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

// We say that a word is hard to pronounce if it contains 44 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

// You are given a string SS consisting of NN lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

// For the purposes of this problem, the vowels are the characters \{a, e, i, o, u\}{a,e,i,o,u} and the consonants are the other 2121 characters.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer NN, the length of string SS.
// The second line of each test case contains the string SS.
// Output Format
// For each test case, output on a new line the answer — YES if SS is easy to pronounce, and NO otherwise.

// Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

// Constraints
// 1 \leq T \leq 1001≤T≤100
// 1 \leq N \leq 1001≤N≤100
// SS contains only lowercase Latin characters, i.e, the characters \{a, b, c, \ldots, z\}{a,b,c,…,z}

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
    int ans=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count=0;
        else
        {
            count++;
            ans=max(ans,count);
        }
    }
    if(ans<4) cout<<"YES\n";
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
