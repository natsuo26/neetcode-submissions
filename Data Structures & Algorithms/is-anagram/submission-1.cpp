class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> firstMap;
        if(s.size() != t.size()){
            return false;
        }
        for(const auto& c: s){
            firstMap[c]++;
        }

        for(const auto& c:t){
            if(firstMap.find(c) != firstMap.end()){
                firstMap[c]--;
            }
        }

        for(const auto& it: firstMap){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};
