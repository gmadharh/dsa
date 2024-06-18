class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // create sets to store numbers for each row,col,3x3 grid
        // iterate through board checking for duplicates

        std::unordered_set<int> row[9], col[9];
        std::unordered_set<int> grid[3][3];

        for(int r = 0;r < 9;r++){
            for(int c = 0;c < 9;c++){


                if(board[r][c] == '.'){
                    continue;
                }

                int num = board[r][c];

                if(row[r].count(num) > 0){
                    return false;
                }

                if(col[c].count(num) > 0){
                    return false;
                }

                if(grid[r/3][c/3].count(num) > 0){
                    return false;
                }

                row[r].insert(num);
                col[c].insert(num);
                grid[r/3][c/3].insert(num);

            }
        }

        return true;
    }
};