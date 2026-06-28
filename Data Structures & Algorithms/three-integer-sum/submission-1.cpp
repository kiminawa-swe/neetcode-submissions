class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        //sort first std::sort(nums.begin(), nums.end());
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){

            int left=i+1;
            int right=nums.size()-1;

        if(i>0&&nums[i]==nums[i-1]){
            continue;
        }

            while(left<right){
                int currentSum=nums[i]+nums[left]+nums[right];

                //check duplicate for achor number
                

                if(currentSum==0){
                    
                    result.push_back({nums[i],nums[left],nums[right]});
                    //move the pointer inward after finding the match
                    left++;
                    right--;

                    //check the left and right pointer duplicate

                    while(left<right && nums[left]==nums[left-1] )
                    {left++;}
                    while(left<right && nums[right]==nums[right+1])
                    {right++;}
                }
                else if(currentSum<0){
                    left++;
                }
                else{
                    right--;
                }
                
            }

        }
        return result;
        

    }
};
