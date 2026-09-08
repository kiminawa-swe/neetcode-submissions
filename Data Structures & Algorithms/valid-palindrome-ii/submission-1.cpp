class Solution {
public:
    bool validPalindrome(string s) {
        //two pointer 


        //my raw idea: 
        //1.check first whether ori str same or not with reverse one
        //2.if not same , we should delete max , 1 char ,then check again

        if(isPalidrome(s)){
            return true;
        };

        for(int i=0;i<s.size();i++){
            string newS=s.substr(0,i)+s.substr(i+1);

            if(isPalidrome(newS)){
                return true;
            }
        }

        return false;


        


        



       



        
    }

private:

bool isPalidrome(string s){
        int left=0;
        int right=s.size()-1;

        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;

}


};