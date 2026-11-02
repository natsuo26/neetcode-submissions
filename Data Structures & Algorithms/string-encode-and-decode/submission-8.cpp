class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string encodedString="";
        for(const auto& str: strs){

            encodedString+=(str.length()+'0');
            encodedString+=',';
        }
        encodedString+='#';

        for(const auto& str: strs){
            encodedString+=str;
        }
        cout<<encodedString<<endl;
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        vector<int> counts;
        int stringStartIndex=0;
        for(int i=0;i<s.length();i++){
            char ch = s[i];

            if(ch=='#'){
                stringStartIndex=i+1;
                break;
            }
            if(ch!=','){
                counts.push_back(ch-'0');
            }
        }
        
        for(const auto& count:counts){
            string word = s.substr(stringStartIndex,count);
            stringStartIndex+=count;
            strs.push_back(word);
        }
        return strs;
    }
};
