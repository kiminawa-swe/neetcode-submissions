class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> map;

        for(int num:nums){
            map[num]++; //key:frequency

        }

        vector<vector<int>> buckets(n+1);

        //filling the bucket
        for(const auto& [value,frequency]:map){ //In the loop for(auto& const [value,frequency]:map), the order of qualifiers was incorrect. It should be const auto& [key, value] or auto const& [key, value]
            buckets[frequency].push_back(value);
        }

        vector<int> result;

        for(int i=n;i>=0;i--){
            if(result.size()>=k){
                break;
            }

            for(int num:buckets[i]){ //take every num in buckets
                result.push_back(num);

                

            }
            if(result.size()==k){
                return result;
            }
        }
        

        
    }
};
