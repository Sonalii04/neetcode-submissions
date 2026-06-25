class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest=0 ; 
        for (int num :st) {
        if (st.count(num -1)==0) {

            int currentNum = num;
            int currentLength = 1;

            while (st.count(currentNum + 1)) {
                currentNum++;
                currentLength++;
            }

            longest = max(longest, currentLength);
        }
    }

    return longest;
    }
};
