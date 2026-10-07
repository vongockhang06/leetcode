class Solution {
public:
    bool isValidValue(vector<vector<char>>& board,int row,int column){
        //check row
        for(int i=0;i<9;i++){
            if(i==column) continue;
            if(board[row][column]==board[row][i]) return false;
        }
        //check column
        for(int i=0;i<9;i++){
            if(i==row) continue;
            if(board[row][column]==board[i][column]) return false;
        }
        //check submatrix
        int row_start=row/3;
        row_start*=3;
        int column_start=column/3;
        column_start*=3;
        for(int i=row_start;i<row_start+3;i++){
            for(int j=column_start;j<column_start+3;j++){
                if(i==row && j==column) continue;
                if(board[row][column]==board[i][j]) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(!isValidValue(board,i,j)) return false;
            }
        }
        return true;
    }
};