class Solution {
public:
    bool isAnagram(string s, string t) {
        //check whether the length is equal or not

        if(s.length()!=t.length()){
            return false;
        }
        //we will be using sort function

        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());

        if(s==t){
            return true;
        }
        return false;
        
    }
};
