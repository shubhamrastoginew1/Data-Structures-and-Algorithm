#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[10], n, i, mx, mn;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    mx = arr[0];
    for (i = 0; i < n; i++)
    {
        if (mx < arr[i])
            mx = arr[i];
    }
    mn = arr[0];
    for (i = 0; i < n; i++)
    {
        if (mn > arr[i])
            mn = arr[i];
    }
    cout<<"Largest element: "<< mx;
    cout<<"Smallest element: "<< mn;
    return 0;
}