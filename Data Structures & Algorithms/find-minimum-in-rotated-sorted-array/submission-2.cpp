class Solution {
public:
    int findMin(vector<int> &nums) {
        //solve using binary search
        int left=0;
        int right=nums.size()-1;

        
        

        while(left<right){
            //int mid=(right-(left+1))/2;
            int mid=left+(right-left)/2;

            if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else if(nums[mid]<=nums[right]){
                right =mid;
            }
            
        }

        return nums[left];


        
    }
};
