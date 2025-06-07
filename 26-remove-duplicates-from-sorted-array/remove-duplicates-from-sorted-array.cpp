class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            st.insert(nums[i]);
        }
        int index=0;
        for(auto it:st)
        {
            nums[index]=it;
            index++;
        }
        return st.size();

        
    }
};