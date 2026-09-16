class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left=0;
        int right=left+1;

       for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                if(abs(i-j)<=k){
                    return true;
                }
            }
            }
       }
       return false;
    }
};