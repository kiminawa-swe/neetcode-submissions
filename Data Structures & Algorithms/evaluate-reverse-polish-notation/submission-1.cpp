class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        for(string t:tokens){

            if((t!="*")&&(t!="/")&&(t!="+")&&(t!="-")){
                st.push(stoi(t));
            }
            else{
                // the position of right num must be in previos position compare to left num
                int leftNum=st.top();
                st.pop();
                int rightNum=st.top();
                st.pop();
                int result;

                if(t=="*"){result=rightNum*leftNum;}
                else if(t=="/"){result=rightNum/leftNum;}
                else if(t=="+"){result=rightNum+leftNum;}
                else if(t=="-"){result=rightNum-leftNum;}
                st.push(result);

            }
        }
        return st.top();


    }
};
