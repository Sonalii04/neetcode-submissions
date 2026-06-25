class Solution {
public:
    bool isPalindrome(string s) {
        if (s=="") return true;
        string result = "";

        for(char c : s) {
            if(isalnum(c)) {  
                result += tolower(c);
            }
        }
        int n=result.length();
        for (int i=0 ; i<(n/2) ; i++  ){
            if (result[i] != result[n - i - 1]) {
                return false;
        }
    }
    return true;
    }
};
