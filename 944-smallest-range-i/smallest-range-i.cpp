class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0, n = nums.size(); i < n; i++) {
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        return max(0, maxi - mini - 2 * k);
    }
};