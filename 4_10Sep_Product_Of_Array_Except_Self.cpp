class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pNums(nums.size());
        long long p = 1;
        int c = 0;

        for (long long int i = 0; i<nums.size(); i++) 
        {
            if (nums[i] == 0) 
            {
                c++;
            } 
            else 
            {
                p *= nums[i];
            }
        }

        for (long long int i = 0; i<nums.size(); i++) 
        {
            if(c > 1) 
            {
                pNums[i] = 0;
            }    
            else if(c == 1) 
            {
                pNums[i] = (nums[i] == 0) ? p : 0;
            }    
            else 
            {
                pNums[i] = p / nums[i];
            }
        }

    return pNums;
    }
};