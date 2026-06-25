class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //step
        //construct unordered_set for row,colum,and boxes
        //1.nested loop row and colum
        //  1.1: check the char value,
        //  1.2: check if the value is "." so skip it(continue)
        //  1.3: use (row / 3) * 3 + (col / 3) as index for boxes
        //2.check the three condition(row,colum,boxes) count()
        //  2.1:return false (if it count)
        //3.store those value in the undordered_set(row,colum,boxes)

        unordered_set<char>row[9];
        unordered_set<char>colum[9];
        unordered_set<char>box[9];

        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){

                char val=board[r][c];

                if(val=='.'){
                    continue; //skip the loop
                }
                //Calculate which of the 9 sub-boxes this cell belongs to
                int box_index=(r / 3) * 3 + (c / 3);
                //Check for duplicates BEFORE inserting
                if(row[r].count(val)||colum[c].count(val)||box[box_index].count(val)){
                    return false;
                }
                row[r].insert(val);
                colum[c].insert(val);
                box[box_index].insert(val);
            }

            
        }

        return true;
            
        
    }
};
