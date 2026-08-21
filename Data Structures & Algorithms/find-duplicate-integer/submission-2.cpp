class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow=0;
        int fast=0;

        //detecting the cycle
        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(fast==slow){
                break;
            }
        }
        //currently slow is in a repeated cycle

        int slow2=0;
        while(true){
            slow2=nums[slow2];
            slow=nums[slow];

            if(slow==slow2){
                return slow;
            }
        }


        
    }
};
