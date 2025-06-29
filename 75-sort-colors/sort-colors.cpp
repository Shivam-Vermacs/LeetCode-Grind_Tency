class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // int count1=0,count2=0,count3=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==0)
        //     {
        //         count1++;
        //     }
        //     else
        //     if(nums[i]==1)
        //     {
        //         count2++;
        //     }
        //     else
        //     {
        //         count3++;
        //     }
        // }
        // for(int i=0;i<count1;i++)
        // {
        //     nums[i]=0;
        // }
        // for(int i=count1;i<count2+count1;i++)
        // {
        //     nums[i]=1;
        // }
        // for(int i=count2+count1;i<n;i++)
        // {
        //     nums[i]=2;
        // }

        int mid=0,low=0,high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else
            if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};