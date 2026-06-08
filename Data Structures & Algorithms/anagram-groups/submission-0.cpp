class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> anagramMap;

        for(string s:strs){
            string sortedKey=s; // initialize value before getting sorted
            std::sort(sortedKey.begin(),sortedKey.end()); //now the sortedKey already sorted
            //syntax to use, container.push_back(value_to insert)
            anagramMap[sortedKey].push_back(s);  //anagramMap[sortedKey] because we want specific key for example "aet":["tea","tae"] 
            //now the key: value is stored in the hash map named anagramMap
        }

        //so after already sort all of it into key:value pair ,we want to illeterate
        //we only want the value which called as group

        //first 1.create a new container that still empty

        vector<vector<string>> result; //this will store the group/value
        //syntax to use auto const&[key, group]:anagramMap
        for(auto const&[key, group]:anagramMap){
            //container.push_back(value_to_insert)
            result.push_back(group);
        }
        return result;
        
    }
};