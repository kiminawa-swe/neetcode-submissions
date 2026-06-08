class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> sMap;
        unordered_map<char,int>tMap;

        for(char h:s){
            sMap[h]++;
        }
        for(char b:t){
            tMap[b]++;
        }

        if(sMap==tMap){
            return true;
        }
        return false;
        
    }
};
