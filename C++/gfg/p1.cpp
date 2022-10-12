// You are given N number of books. Every ith book has Ai number of pages. The books are arranged in ascending order.

// You have to allocate contiguous books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is the minimum of those in all the other permutations and print this minimum value.

// Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

// Code:
 class Solution 
{
    public:
    bool isValid(int arr[],int n,int m,int mx)
    {
        int student=1,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>mx)
            {
                student++;
                sum=0;
                i--;
            }
            if(student>m) return false;
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        //code here
        if(n<m) return -1;
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        int s=maxi,e=sum,ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isValid(arr,n,m,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};