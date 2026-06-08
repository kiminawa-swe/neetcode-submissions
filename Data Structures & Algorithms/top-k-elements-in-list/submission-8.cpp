class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int num:nums){
            map[num]++;

        }

        priority_queue<pair<int,int>> pq ;

        for(auto& pair:map){
            pq.push(make_pair(pair.second,pair.first));
        }

        vector<int> output(k);

        for(auto& out:output){
            out=pq.top().second; //look for highest frequency in the pq listringstream
            pq.pop(); //removing the top pair so it wont repeat or get the same item
        }
        return output;

        

        
    }
};
