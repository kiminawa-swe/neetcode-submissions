class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());//sort in increasing order

        //sliding window with size of k
        int left=0;
        int minDif=INT_MAX;
        int right=k-1;//why
        
        while(right<nums.size()){
            int dif=nums[right]-nums[left];
            minDif=min(minDif,dif);
            left++;
            right++;
        }
        return minDif;
    }
};