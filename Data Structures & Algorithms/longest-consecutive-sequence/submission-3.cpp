class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestStreak=0; //initiate with 0
        unordered_set<int>numSet;

        for(int num: nums){
            numSet.insert(num);
        }

        for(int n:numSet){

            if(numSet.count(n-1)==0){

                int currentStreak=1;
                int currentNum=n;

                while(numSet.count(currentNum+1)){
                    currentStreak+=1;
                    currentNum+=1;
                }

                longestStreak=max(longestStreak,currentStreak);
            }

        }

        return longestStreak;

        
        
    }
};
