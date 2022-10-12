// A conveyor belt has packages that must be shipped from one port to another within days days.

// The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

// Code:

class Solution {
public:
    bool isValid(vector<int>& weights,int days,int ans,int mx)
    {
        int sum=0,currDay=1;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
            if(sum>mx)
            {
                currDay++;
                sum=0;
                i--;
            }
            if(currDay>days) return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0,e=5000000,ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isValid(weights,days,ans,mid))
            {
                ans = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        return ans;
    }
};