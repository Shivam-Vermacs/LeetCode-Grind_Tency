class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int ,int>mp;
        vector<int>v;
        for(auto it:nums)
        {
            mp[it]=1;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};