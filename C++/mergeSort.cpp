#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r){
    int sz = r-l+1;
    vector<int> temp(sz);
    int i = l, j = mid+1, k = 0;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else temp[k++] = arr[j++];
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=r){
        temp[k++] = arr[j++];
    }
    i = l;
    while(i<=r){
        arr[i] = temp[i-l];
        i++;
    }
}


void mergeSort(vector<int> &arr, int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}


int main() {
    vector<int> arr = {3,1,2,5,4,2,6,424, 2};
    
    mergeSort(arr, 0, arr.size()-1);
    
    for(auto it : arr) cout<<it<<" ";

    return 0;
}