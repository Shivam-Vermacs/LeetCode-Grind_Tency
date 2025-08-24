class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,sum1=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        for(int i=1;i<=nums.size();i++)
        {
            sum1+=i;
        }
        return sum1-sum;
    }
};