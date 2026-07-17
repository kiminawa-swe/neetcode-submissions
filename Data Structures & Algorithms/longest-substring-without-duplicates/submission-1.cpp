class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxLen=0;
        unordered_set<char>str;

        for(int right=0;right<s.size();right++){

            while(str.count(s[right])){
                str.erase(s[left]); //erase the char in str until no more duplicate char exist
                left++;
            }

            str.insert(s[right]);

            maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
