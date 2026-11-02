class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString="";
        for(const auto& str: strs){
            encodedString=encodedString+str+'`';
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string word="";
        for(const auto& ch:s){
            if(ch == '`'){
                strs.push_back(word);
                word="";
            }else{
                word=word+ch;
            }
        }

        return strs;
    }
};
