class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        vector<int>presence(26);

        for(auto c:allowed){
            presence[c-'a']=1;
        }

        for(auto s:words){
            bool seen=true;
            for(auto c:s){
                if(presence[c-'a']==0){
                    seen=false;
                }
            }
            if(seen){
                count++;
            }
        }
        return count;
    }
};