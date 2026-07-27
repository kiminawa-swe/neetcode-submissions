class Solution {
public:
    int findMin(vector<int> &nums) {
        sort(nums.begin(),nums.end()); //sort in ascending order 

        return nums[0];
    }
};
