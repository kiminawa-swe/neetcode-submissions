class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> map;
        

        for(int num : nums){
            if(map.count(num)){
                return true;
            }
            //if not found ,then put it into the set of map
            map.insert(num);
        }
        return false;
        
    }
};