// Chef has 33 hidden numbers A, B,A,B, and CC such that 0 \leq A, B, C \leq N0≤A,B,C≤N.

// Let ff be a function such that f(i) = (A \oplus i) + (B \oplus i) + (C \oplus i)f(i)=(A⊕i)+(B⊕i)+(C⊕i). Here \oplus⊕ denotes the bitwise XOR operation.

// Given the values of f(0), f(1), \dots, f(N)f(0),f(1),…,f(N), determine the values of A, B,A,B, and CC.

// It is guaranteed that at least one tuple exists for the given input. If there are multiple valid tuples of A, B, CA,B,C, print any one.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer NN denoting the upper bound on the values of A, B, CA,B,C.
// Next line contains N+1N+1 space-separated integers denoting f(0), f(1), \dots, f(N)f(0),f(1),…,f(N).
// Output Format
// For each test case, output on a new line, three space-separated integers, the values of A, B,A,B, and CC. If there are multiple valid tuples of A, B, CA,B,C, print any one.

// Constraints
// 1 \leq T \leq 2 \cdot 10^41≤T≤2⋅10 
// 4
 
// 2 \leq N \leq 10^52≤N≤10 
// 5
 
// Sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10 
// 5
//  .

// Code:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int power(int x)
{
    int ans=0;
    for(int i=x;i>=1;i--)
    {
        if((i&(i-1))==0)
        {
            ans=i;
            break;
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=0;i<n+1;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    vector<int> tuple(3,0);
    for(int i=power(n);i>0;i/=2)
    {
        int d = arr[i]-arr[0];
        if(d<0)
        {
            d*=-1;
            int c = d/i;
            if(c==1)
            {
                c=2;
                if((tuple[0]^i)<=n)
                {
                    tuple[0]^=i;
                    c--;
                }
                if(c&&(tuple[1]^i)<=n)
                {
                    tuple[1]^=i;
                    c--;
                }
                if(c>0 && (tuple[2]^i)<=n)
                {
                    tuple[2]^=i;
                }
            }
            else if(c==3)
            {
                tuple[0]^=i;
                tuple[1]^=i;
                tuple[2]^=i;
            }
        }
        else
        {
            int c = d/i;
            if(c==1)
            {
                if((tuple[0]^i)<=n) tuple[0]^=i;
                else if((tuple[1]^i)<=n) tuple[1]^=i;
                else tuple[2]^=i;
            }
        }
        sort(tuple.begin(),tuple.begin()+3);
    }
    cout<<tuple[0]<<" "<<tuple[1]<<" "<<tuple[2];
    cout<<endl;
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
