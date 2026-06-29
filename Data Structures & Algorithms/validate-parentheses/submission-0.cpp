class Solution {
public:
    bool isValid(string s) {
        stack<char> chars; 
        for (char c : s){
            if( c=='(' || c== '[' || c== '{'){
                chars.push(c);
            }
            else{
                if(chars.empty()) return false;
                if( c== ')' && chars.top() != '(' )return false; 
                if( c== ']' && chars.top() != '[' )return false; 
                if( c== '}' && chars.top() != '{' )return false;
                chars.pop(); 
            }
        }
        return chars.empty();
    }
};

