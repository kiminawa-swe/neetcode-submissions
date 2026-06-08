class Solution {
public:
    bool isPalindrome(string s) {

        vector<char> ori;
        vector<char> copy;

        for(char a:s){
            if(std::isalnum(a)){
                ori.push_back(std::tolower(a)); 
            }
           
        }

        std::string rev_s=s; //creating a copy of s into rev_s
        std::reverse(rev_s.begin(),rev_s.end()); //reversing the string

        for(char b:rev_s){
            if(std::isalnum(b)){
                copy.push_back(std::tolower(b));
            }
            
        }

        if(ori==copy){
            return true;
        }
        return false;
        
    }
};
