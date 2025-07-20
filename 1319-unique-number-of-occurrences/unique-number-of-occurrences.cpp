class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> seen;

        for (int num : arr) {
            mp[num]++;
        }

    
        for (auto it : mp) {
            int freq = it.second;
            if (seen.find(freq) != seen.end()) {
                return false;
            }
            seen.insert(freq);
        }

        return true;
    }
};
