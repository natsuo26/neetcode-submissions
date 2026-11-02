class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check row
        cout<<"rows:"<<endl;
        for(const auto& row: board){
            int frequency[11]={0};
            for(const auto& elem: row){
                if(elem != '.'){
                    if(frequency[elem-'0']>0) return false;
                    frequency[elem-'0']++;
                }
                cout<<elem<<" ";
            }
            cout<<endl;
        }
        //check column
        cout<<"columns:"<<endl;
        for(int i=0;i<board.size();i++){
            int frequency[11]={0};
            for(int j=0;j<board[i].size();j++){
                if(board[j][i] != '.')
                {
                    if(frequency[board[j][i]-'0']>0) return false;
                    frequency[board[j][i]-'0']++;
                }
                cout<<board[j][i]<<" ";
            }
            cout<<endl;
        }

        //check each box;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(checkBox(board,i*3,j*3)==false) return false;
            }
        }

        return true;
    }

    bool checkBox(vector<vector<char>>& board,int xoffset,int yoffset){
        int frequency[11]={0};
        for(int i=xoffset;i<xoffset+3;i++){
            for(int j=yoffset;j<yoffset+3;j++){
                if(board[i][j] != '.')
                {
                    if(frequency[board[i][j]-'0']>0) return false;
                    frequency[board[i][j]-'0']++;
                }
                
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"freq arr :"<<endl;
        for(const auto& elem:frequency){
            cout<<elem<<" ";
        }
        cout<<endl;
        return true;
    }
};
