class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(string str:strs){
            s+=to_string(str.size())+'#'+str;

        }

        return s;

    }

    vector<string> decode(string s) {

        //s.find(target, start_index)-->we will get the index of delimiter
        //s.substr(start_index, length)-->extract the len
        vector<string>result;
        int i=0;

        while(i<s.length()){

            int deli_pos=s.find("#",i);
            int len=stoi(s.substr(i,deli_pos-i)); // need to be in integer
            string target=s.substr(deli_pos+1,len);
            result.push_back(target);

            i=deli_pos+len+1;  //i=deli_pos+len+1;
        }
return result;


    }
};
