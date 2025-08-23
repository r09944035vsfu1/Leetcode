class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set_;
        int res = 0;
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            while ( (j < s.size()) && (set_.count(s[j]) == 0) ) {
                set_.insert(s[j]);
                j++;
            }
            int n = set_.size();
            res = max(res, n);
            set_.erase(s[i]);
        }
        return res;
    }
};
