class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        int n=nums.size();

        for(int i=0;i<n;i++){
            int num1=nums[i];
            for(int j=i+1;j<n;j++){
                int num2=nums[j];

                if(nums[i]==nums[j]){
                    return true;
                }
        }
        }
        return false;
        
    }
};