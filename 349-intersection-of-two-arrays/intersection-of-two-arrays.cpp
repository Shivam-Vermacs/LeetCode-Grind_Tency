class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int n=nums1.size();
    int m=nums2.size();
    set<int>ans;
	vector<int>vis(m);
	vector<int>v;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(nums1[i]==nums2[j] && vis[j]==0)
			{
				ans.insert(nums1[i]);
				vis[j]=1;
				break;
			}
			if(nums2[j]>nums1[i])break;

		}
	}
	for(auto it:ans)
    {
        v.push_back(it);
    }
    return v;
        
    }
};