class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] ={0};
        int col[9][9] = {0};
        int boxes[9][9] = {0};

        // iterate through rows
        for(int i=0; i<9; i++)
        {
            // iterate through columns
            for(int j=0; j<9; j++)
            {
                if(board[i][j] == '.') continue;

                // convert char into int
                int num = board[i][j] - '1';
                //calculate the box idx
                int boxidx = (i/3)*3 + (j/3);

                if(rows[i][num] || col[j][num] || boxes[boxidx][num])
                {
                  return false;   
                }
                rows[i][num] = 1;
                col[j][num] = 1;
                boxes[boxidx][num] = 1;
            }
        }
        return true;
    }
};
