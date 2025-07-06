class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[i]==nums[j])
        //         {
        //             return true;
        //         }
        //     }
        // }
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto i:mp)
        {
            if(i.second>1)
            {
                return true;
            }
        }
        return false;
    }
};