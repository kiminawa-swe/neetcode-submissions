class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> numMap;

        for(int num:nums){
            numMap[num]++;  //every time found the same int add 1
            
        }
        //syntax used for priority_que
        //priority_queue<Type, Container, Comparison>
        //priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        priority_queue<pair<int,int>> pq;

        //it will rearrange the num:frequency to ,frequency:num
        for(auto& pair:numMap){
            pq.push(make_pair(pair.second,pair.first));
        }
        //initialize a vector array to store the target output
        vector<int> output(k); // use k to know how many top frequency'numbers needed

        for(auto& out:output){
            out=pq.top().second; //look for top position which has highest frequency
            pq.pop(); //removing the top pair only ,so it wont repeat same pair
        }
        return output;




        
    }
};
