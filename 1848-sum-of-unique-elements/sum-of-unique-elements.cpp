class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto i:mp)
        {
            if(i.second==1)
            {
                sum+=i.first;
            }
        }
        return sum;
    }
};