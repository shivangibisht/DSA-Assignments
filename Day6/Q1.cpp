class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {int n1=0;int m,n;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='R'){m=i;n=j;}
            }
        }
        for(int i=m;i<board.size();i++){
            if(board[i][n]=='B')break;
            if(board[i][n]=='p'){n1++;break;}
        } for(int i=m;i>=0;i--){
            if(board[i][n]=='B')break;
            if(board[i][n]=='p'){n1++;break;}
        } for(int i=n;i<board.size();i++){
            if(board[m][i]=='B')break;
            if(board[m][i]=='p'){n1++;break;}
        } for(int i=n;i>=0;i--){
            if(board[m][i]=='B')break;
            if(board[m][i]=='p'){n1++;break;}
        }
        return n1;
        
        
        
    }
};
