class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int i=0,j=0;
        int n = s.size();
        int maxf=0;
        int res=0;
        while(j<n){
            mp[s[j]]++;
            maxf=max(maxf,mp[s[j]]);

            while(((j-i+1)-maxf)>k){
                mp[s[i]]--;
                i++;
            }
            res = max(res,j-i+1);
            j++;
        }
        return res;
    }
};
