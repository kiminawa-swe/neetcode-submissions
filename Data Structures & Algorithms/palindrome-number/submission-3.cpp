class Solution {
public:
    bool isPalindrome(int x) {
        string num=to_string(x);
        vector<char>nm;
        for(auto a:num){
            nm.push_back(a);
        }
        int left=0;
        int right=nm.size()-1;

        while(left<right){

            if(nm[left]==nm[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
            
            
        }
        return true;
        
    }
};