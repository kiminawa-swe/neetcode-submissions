class Solution {
public:
    int scoreOfString(string s) {

        int score=0;

        for(int i=0;i<s.length()-1;i++){

            int a1=s[i];
            int a2=s[i+1];

            int dif=a2-a1;

            if(dif<0){
                dif/=-1;
            }

            score=score+dif;

        }
        return score;
    }


};