class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char>row[9];
        vector<char>colum[9];
        vector<char>box[9];

        for(int r=0;r<board.size();r++){
            for(int c=0;c<board.size();c++){

                char val=board[r][c];
                
                if(val=='.'){continue;}

                int box_index=(r/3)*3+(c/3);

//using vector instead of unordered_set
//use find()
//push_back()

                if(find(row[r].begin(),row[r].end(),val) !=row[r].end()||
                find(colum[c].begin(),colum[c].end(),val) !=colum[c].end()||
                find(box[box_index].begin(),box[box_index].end(),val) !=box[box_index].end()){
                    return false;
                }
                
                    row[r].push_back(val);
                    colum[c].push_back(val);
                    box[box_index].push_back(val);
                
                

            }
        }

        return true;
    }
};
