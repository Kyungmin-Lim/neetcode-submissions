class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0, 0};
        int col[9][9] = {0, 0};
        int blk[9][9] = {0, 0};

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int blk_idx = (i/3)*3 + (j/3);
                char val = board[i][j];
                if(val == '.')
                {
                    continue;
                }
                int idx = val-'1';

                if(row[i][idx]||col[j][idx]||blk[blk_idx][idx])
                {
                    return false;
                }
                row[i][idx]=1;
                col[j][idx]=1;
                blk[blk_idx][idx]=1;
            }
        }
        return true;
        
    }
};
