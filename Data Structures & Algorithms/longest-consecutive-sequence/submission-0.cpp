class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());

        int longest_streak=0; // here we will update the longest streak among all of itemplate

        for(auto num:nums){
            if(!numSet.count(num-1)) //num -1 (number at start of consecutive ) return true if there is no other number smaller
            {
                int current=num;
                int current_streak=1;
                while(numSet.count(current+1)){
                    current++;
                    current_streak++;

                    //
                }
                longest_streak=max(current_streak,longest_streak);

            }
        }
        return longest_streak;
    }
};
