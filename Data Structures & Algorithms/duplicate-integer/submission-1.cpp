class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> exist;  //remember unordered_map and undordered_set is different

        for(int num :nums){
            if(exist.count(num)){ // this code shows that is there any similar number yet ?
            return true;
            }
            exist.insert(num);      
        }
        return false;
        
    }
};