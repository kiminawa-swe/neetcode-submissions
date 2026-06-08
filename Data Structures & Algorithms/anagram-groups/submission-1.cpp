class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>>map;

        //create a container with sorted string


        for(string s:strs){

            std::string sorted=s;
            sort(sorted.begin(),sorted.end());
            map[sorted].push_back(s);

            //so when second string is illiterate ,if it sorted(it goes the same container)
            //thus ori string will be illiterate in the container

        }

        vector<vector<string>> result;

        for(auto& pair :map){
            result.push_back(pair.second);
        }
        return result;

        
        
        
    }
};
