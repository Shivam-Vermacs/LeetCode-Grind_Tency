class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                count1++;
            }
            else
            if(nums[i]==1)
            {
                count2++;
            }
            else
            {
                count3++;
            }
        }
        for(int i=0;i<count1;i++)
        {
            nums[i]=0;
        }
        for(int i=count1;i<count2+count1;i++)
        {
            nums[i]=1;
        }
        for(int i=count2+count1;i<n;i++)
        {
            nums[i]=2;
        }
    }
};