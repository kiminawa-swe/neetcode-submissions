class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>map;

        for(auto n:nums){
            if(map.empty()){
                map.insert(n);
            }
            else if(map.count(n)){
                return n;
            }
            map.insert(n);
        }
    }
};
