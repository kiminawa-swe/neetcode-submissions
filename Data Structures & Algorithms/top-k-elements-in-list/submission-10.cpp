class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count the frequency of each number
        unordered_map<int, int> map;
        for(int num : nums) {
            if(map.count(num) == 0) {
                map[num] = 1;
            } else {
                map[num] = map[num] + 1;
            }
        }

        // Step 2: Store all frequencies into a vector
        vector<int> valueVtr;
        for(auto const& [key, value] : map) {
            valueVtr.push_back(value);
        }

        // Step 3: Find the top 'k' highest frequencies
        unordered_set<int> maxValue;
        for(int i = 0; i < k; i++) {
            // Find the current maximum
            auto max_it = max_element(valueVtr.begin(), valueVtr.end());
            int max_val = *max_it;
            maxValue.insert(max_val);
            
            // CRITICAL FIX: Erase it so the next iteration finds the next highest!
            valueVtr.erase(max_it);
        }

        // Step 4: Extract the keys matching those high frequencies
        vector<int> keyNum;
        // CRITICAL FIX: Use a range-based loop to safely read through the map
        for(auto const& [kunci, nilai] : map) {
            if(maxValue.count(nilai)) {
                keyNum.push_back(kunci);
            }
        }

        return keyNum;
    }
};
