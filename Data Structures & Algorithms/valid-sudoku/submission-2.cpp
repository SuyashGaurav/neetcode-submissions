class Solution {
public:
    bool isValid(vector<vector<char>> &board, int x, int y) {
        for(int i=0; i<9; i++) {
            if(i != y && board[x][i] == board[x][y]) return false;
            if(i != x && board[i][y] == board[x][y]) return false;
        }
        int ix = (x/3)*3;
        int jy = (y/3)*3;
        for(int i=ix; i<ix+3; i++) {
            for(int j=jy; j<jy+3; j++) {
                if(!(i==x || j==y) && board[i][j] == board[x][y]) return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j] == '.') continue;
                else if (!isValid(board, i, j)) return false;
            }
        }
        return true;
    }
};
