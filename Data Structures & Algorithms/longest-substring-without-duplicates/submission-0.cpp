class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int i=0,j=0;
        int n = s.size();
        int maxLength = 0;
        while(j<n){
            while(charSet.find(s[j]) != charSet.end()){
                charSet.erase(s[i]);
                i++;
            }
            charSet.insert(s[j]);
            maxLength = max(maxLength,j-i+1);
            j++;
        }
        return maxLength;
    }
};
