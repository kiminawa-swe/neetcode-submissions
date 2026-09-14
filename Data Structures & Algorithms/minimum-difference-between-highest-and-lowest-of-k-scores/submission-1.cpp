class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int minDif=INT_MAX;
        int left=0;
        int right=k-1;

        while(right<nums.size()){
            int dif=nums[right]-nums[left];
            minDif=min(minDif,dif);
            left++;
            right++;
        }

        return minDif;
    }
};