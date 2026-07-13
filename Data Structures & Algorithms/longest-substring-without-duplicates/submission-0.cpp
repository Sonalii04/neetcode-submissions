class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_set<char> st;
        int maxLength = 0;

        for ( int right =0 ; right<s.size() ; right++){
            while (st.count(s[right])){
                st.erase(s[left]);
                left ++;
            }
            st.insert(s[right]);
            maxLength = max (right-left+1 , maxLength);
        }
        return maxLength;
    }
};
