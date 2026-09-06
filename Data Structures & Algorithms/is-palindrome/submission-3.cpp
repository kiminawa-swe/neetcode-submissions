class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(unsigned char c: s){
            if(isalnum(c)){
                cleaned+=tolower(c);
            }
        }

        string rev=cleaned;
        reverse(rev.begin(),rev.end());

        return rev==cleaned;
    }
};
