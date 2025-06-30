class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>n/3)
            {
                st.insert(it.first);
            }
        }
        vector<int>v;
        for(auto i:st)
        {
            v.push_back(i);
        }
        return v;
    }
};