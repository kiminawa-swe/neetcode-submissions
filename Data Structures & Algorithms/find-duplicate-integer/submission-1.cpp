class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        //floyd cycle detection

        //detect where the cycle 

        int fast=0; int slow=0;

        while(true){
            slow=nums[slow];      //0->1->3->2->4->2->4->2->....
            fast=nums[nums[fast]]; //0->3->2->4->2->4->2->4->2....so on

            if(slow==fast){
                break; // this mean slow and fast is in the loop of cycle
            }
        }

        int slow2=0;

        while(true){
            slow2=nums[slow2];
            slow=nums[slow];

            if(slow2==slow){
                return slow2;
            }
        }
        




        
    }
};
