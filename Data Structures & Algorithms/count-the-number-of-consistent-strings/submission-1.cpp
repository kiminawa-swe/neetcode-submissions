class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        //char in allowed must be in words, and if others than allowed char, it not consistent
        int cons=words.size();
        unordered_set<char>allow;
        for(auto a:allowed){
            allow.insert(a);

        }

        for(int i=0;i<words.size();i++){
            for(auto b:words[i]){
                if(!allow.count(b)){
                    cons-=1;
                    break;
                }
                
                
            }
            
        }

        return cons;
    }
};