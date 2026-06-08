class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;

        for(int i=0;i<s.length();i++){
            smap[s[i]]++; //this mean every char in the string will stored as (key-->char) and (value--->frequency of the char)
            tmap[t[i]]++;
        }

        if(smap==tmap){
            return true;
        }
        return false;
    }
};