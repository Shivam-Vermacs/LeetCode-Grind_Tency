class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> freq;

        for( char c : s){
            freq[c]++;
        }

        auto its = freq.begin();
        int first = its->second;

        for (auto it = freq.begin(); it != freq.end(); ) {
            if( it->second == first ) it++;
            else return false;
    }
    return true;
    }
};