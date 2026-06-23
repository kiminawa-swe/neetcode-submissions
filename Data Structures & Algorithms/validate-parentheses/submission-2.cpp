class Solution {
public:
    bool isValid(string s) {

        //stack container

        stack<char>openBracket;

        for(char c:s){

            if((c=='[')||(c=='{')||(c=='(')){
                openBracket.push(c); //stack can only use push , not push_back
            }
            else{

                if(openBracket.empty()){
                    return false;}
                
                char topBracket=openBracket.top();
                if(((c==']')&&topBracket=='[') ||
                 ((c=='}')&&topBracket=='{') ||
                 ((c==')')&&topBracket=='(')  ){

                    //if match remove the bracket 
                    openBracket.pop();
                 }
                 else{
                    return false; // if theres a missmatch
                 }

                 
            }
        }

        return openBracket.empty(); // if theres no missmatch (eg; [ (,( ]  )
        
    }
};
