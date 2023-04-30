class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector < map<int, char>> V(9), H(9), grids(9);

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                if (board[i][j] != '.' && (grids[i - i%3 + j/3][board[i][j]]++
                    || V[j][board[i][j]]++
                    || H[i][board[i][j]]++))
                    return 0;
        return 1;
    }
};