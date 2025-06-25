class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        //brute force

    //     long long longest=0,s=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=i;j<n;j++)
    //         {
    //             s=0;
    //             for(int l=i;l<=j;l++)
    //             {
    //                 s+=nums[l];
    //             }
    //             if(s==k)
    //             longest++;
    //         }
    //     }
    //     return longest;
        
    // }


    //Optimized Brute Force
         int longest=0,s=0;
        for(int i=0;i<n;i++)
        {s=0;
            for(int j=i;j<n;j++)
            {
                
               s+=nums[j];
                if(s==k)
                longest++;
            }
        }
        return longest;
        
    }


};