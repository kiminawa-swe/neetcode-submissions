class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n=numbers.size();

        int left =0;
        int right=n-1;

        while(left<right){
            int sum=numbers[left]+numbers[right];

            if(sum==target){
                return {left+1,right+1};// just add by 1 as question only want 1-indexed indices
            }
            else if (sum<target){
                left++;
                
            }
            else{
                right--;
            }

            }
            return {};
        }
        
    
};
