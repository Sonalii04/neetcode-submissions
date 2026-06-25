class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        for (int i=0;i<t.size();i++){
            map[t[i]]--;
        }
        for(auto&pair:map){
            if(pair.second!=0){
                return false;
            }
        }
        return true; 
    }
};
