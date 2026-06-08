class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        int product=1;
        vector<int> result(n);
        vector<int> prefproduct(n);
        vector<int> sufproduct(n);

        // finding the prefix product
        // first initiate a rule...
        prefproduct[0]=1; // nothing at left ,thus initiate 1, not 0
        for(int i=1;i<n;i++){
            prefproduct[i]=nums[i-1]*prefproduct[i-1];
        }

        //finding the suffix product
        //initiate a rule
        sufproduct[n-1]=1;
        for(int i=n-2;i>=0;i--){
            sufproduct[i]=nums[i+1]*sufproduct[i+1];
        }

        for(int i=0;i<n;i++){
            result[i]=prefproduct[i]*sufproduct[i];
        }
        return result;
            

        }

    
};
