class Solution {
public:
    bool CheckOK(vector<int> &m, char c, int len, int k) {
        m[c-'A'] += 1;
        int max = *max_element(m.begin(), m.end());
        if (len - max <= k) return true;
        else {
            m[c-'A'] -= 1;
            return false;
        }
    }
    int characterReplacement(string s, int k) {
        int j = 0;
        int res = 0;
        vector<int> m(26, 0);
        for (int i = 0; i < s.size(); i++) {
            while (j < s.size() && CheckOK(m, s[j], j-i+1, k)) {
                j++;
            }
            res = max(res, j-i);
            m[s[i] - 'A']--;
        }
        return res;
    }
};
