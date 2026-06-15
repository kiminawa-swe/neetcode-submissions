class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>sMap;
        unordered_map<char,int>tMap;

if(s.size()!=t.size()){
    return false;
}
        for(char schar:s){
            sMap[schar]++;
        }
        for(char tchar:t){
            tMap[tchar]++;
        }

        if(sMap==tMap){
            return true;
        }

        return false;
        
    }
};

//at first
//this code use unordered_set,which only store unique char(no duplicate) so it
//might not catch dupicate char if the string length the same
