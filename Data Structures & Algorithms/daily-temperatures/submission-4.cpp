class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //monotic stack
        int n=temperatures.size();
        vector<int>temp(n); //initialise with 0s  //store the output
        stack<int>st;

        for(int i=0;i<n;i++){

            while(!st.empty()&&temperatures[i]>temperatures[st.top()]){
                int prevDay=st.top();
                st.pop();

                temp[prevDay]=i-prevDay; //we found the warmer day at index i, so to i-prevDay, we got the days
            }
            st.push(i);// this is the index of waiting day,
        }
        return temp;
    }
};
