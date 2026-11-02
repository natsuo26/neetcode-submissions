class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<vector<string>> ans;
       std::unordered_map<string,vector<string>> keyMap;
       for(const auto& str:strs){
        string sortedString= str;
        sort(sortedString.begin(),sortedString.end());
        keyMap[sortedString].push_back(str);
       } 

       for(const auto&it : keyMap){
        ans.push_back(it.second);
       }
       return ans;
    }
};
