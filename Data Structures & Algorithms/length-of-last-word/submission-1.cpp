class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int length=0;

        while(s[i]==' '){
            i--;
        }

        while(s[i]!=' '&&i>=0){
            i--;
            length++;
        }

        return length;
        
    }
};