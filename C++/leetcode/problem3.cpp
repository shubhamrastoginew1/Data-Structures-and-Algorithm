// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

// You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

// Code:
typedef long long int ll; 
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        ll ans=0;
        for(int i=0;i<nums.size();i++) //doing xor of all the elements in the array so
        {                               //that all the repeated elements get cancelled
            ans = ans^nums[i];          //and in the last we have the xor of the two 
        }                               //elements which occured only once.
        
        
        ll rmsb = ans & (~ans + 1);  //finding the rightmost set bit
        
        int x=0,y=0;        //x and y will have the two elements that we want finally
        
        
/* now we will separate the elements in the array whose rightmost bit is set and the elements whose rightmost bit is not set.
then we will do xor of one variable ie. x with the element that is not set and will continue to do so for all the elements which are not set.
similary we would repeat the procedure for variable y and the elements which are set.
*/
        
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&rmsb) == 0)
                x = x^nums[i];
            else 
                y = y^nums[i];
        }
        
//after the for loop is over we would have our two desired elements in x and y.
        
        vector<int> res;
        res.push_back(x);
        res.push_back(y);
        return res;
    }
};