class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length();

        while(i<j){
            while(i < j && !isAlphaNumeric(s[i])) i++;
            while(i < j && !isAlphaNumeric(s[j]))j--;
            if((s[i]|32)!=(s[j]|32)) 
                return false;
            j--;
            i++;
        }
        
        return true;
    }


    bool isAlphaNumeric(char c){
        return (c<='9' && c>='0') || (c<='Z' && c>='A') || (c<='z' && c>='A');
    }
};
