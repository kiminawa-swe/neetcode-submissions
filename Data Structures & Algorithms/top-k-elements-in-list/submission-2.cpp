class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> count;
        //store key(num) and value(frequency)

        for(int num:nums){
            count[num]++;

        }

        priority_queue<pair<int,int>> pq;

        for(auto const& [val, freq] : count){   
                pq.push(make_pair(freq, val)); //frequncy(key) and num(value)

        }
        vector<int> output;

        for(int i = 0; i < k; ++i){
            output.push_back(pq.top().second);
            pq.pop();
        }
        return output;
    }
};