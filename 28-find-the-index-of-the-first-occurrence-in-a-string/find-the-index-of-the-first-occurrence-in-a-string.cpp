class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()==0)
        {
            return -1;
        }
        string c;
        int n=haystack.size();
        for(int i=0;i<n;i++)
        {    c="";
            for(int j=i;j<n;j++)
            {
                c=c+haystack[j];
                if(c==needle)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};