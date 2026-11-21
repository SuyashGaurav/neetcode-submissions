class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        uint16_t rows[9] = {};
        uint16_t cols[9] = {};
        uint16_t boxes[9] = {};
        for(int r=0; r<9; r++) {
            for(int c=0; c<9; c++) {
                char ch = board[r][c];
                if(ch == '.') continue;

                uint16_t bit = 1u << (ch-'1');
                
                int b = (r/3)*3 + (c/3);
                if((rows[r] | cols[c] | boxes[b]) & bit) return false;

                rows[r] |= bit;
                cols[c] |= bit;
                boxes[b] |= bit;
            }
        }
        return true;
    }
};
