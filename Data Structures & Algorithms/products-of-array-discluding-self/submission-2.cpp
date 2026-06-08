class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix and suffix approach
        //create vector for prefix(product before selected num),suffix, result(store the result)
        int n=nums.size();
        vector<int>pref_prod(n);
        vector<int>suf_prod(n);
        vector<int>result(n);

        //we need to initialize for both prefix and suffix

        pref_prod[0]=1; //no number beside last digit(left)
        suf_prod[n-1]=1; //no number beside last digit(left)

        for(int i=1;i<n;i++){
            pref_prod[i]=nums[i-1]*pref_prod[i-1];
        }

        for(int i=n-2;i>=0;i--){
            suf_prod[i]=nums[i+1]*suf_prod[i+1];
            
        }

        for(int i=0;i<n;i++){
            result[i]=pref_prod[i]*suf_prod[i];
        }
        return result;





        

    }
};
