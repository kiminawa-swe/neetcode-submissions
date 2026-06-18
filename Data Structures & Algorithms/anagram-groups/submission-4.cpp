class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        unordered_map<string,vector<string>>map;
        for(string str:strs){
            string sortedstr=str;

            sort(sortedstr.begin(),sortedstr.end());

            map[sortedstr].push_back(str);
        }

        vector<vector<string>>result;

        for(auto const&[key,value]:map){
            result.push_back(value);
        }

        return result;
        
    }
};
