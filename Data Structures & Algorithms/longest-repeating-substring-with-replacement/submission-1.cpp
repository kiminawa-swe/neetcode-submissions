class Solution {
public:
    int characterReplacement(string s, int k) {
        //theres 26 character of uppercase english character

        vector<int>count(26,0);
        int maxfreq=0;
        int windowlen=0;

        int left=0;
        

        for(int right=0;right<s.size();right++){

            count[s[right]-'A']++;

            maxfreq=max(maxfreq,count[s[right]-'A']);

            // Step 3: The Validation Check
            // Formula: (Window Length) - (Most Frequent Count) > k --> this will result
            //in total number of unpopular alphabet that will be replaced

            while((right-left+1)-maxfreq>k){// this while  loop will repeat until (right-left+1)-maxfreq<=k 
                //here we move from iniital to next position
                count[s[left]-'A']--;
                left++;
                //this will repeat until the 

            }
            windowlen=max(windowlen,right-left+1);
        }

        return windowlen;



    }
};
