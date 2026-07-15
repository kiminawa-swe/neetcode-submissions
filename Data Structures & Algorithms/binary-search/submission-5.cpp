class Solution {
public:
    int search(vector<int>& nums, int target) {
        //binary search
        //the array must be sorted

        int left=0;
        int right=nums.size()-1;

        while(left<=right){

            //int mid=(right+left)/2; //not suitable will cause integer overflow
            int mid=left+(right-left)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                //mid >target
                right=mid-1;
            }

        }
        return -1;
    }
};
