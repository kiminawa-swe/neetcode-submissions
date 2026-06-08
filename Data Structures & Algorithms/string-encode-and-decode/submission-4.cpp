class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encode;
        for(std::string a:strs){
            encode+=to_string(a.size())+seperator+a;

        }
        return encode;

    

    }

    vector<string> decode(string s) {
        vector<string> decode;
        //std::string substr(size_type pos = 0, size_type len = npos) const;
        int n=s.size(); 
        int i=0;
        while(i<n){
        
            size_t del_pos=s.find(seperator,i);
            int len_strs=stoi(s.substr(i,del_pos-i));
            i=del_pos+1;
            std::string strs=s.substr(i,len_strs);
            decode.push_back(strs);

            //the next index after the previous string
            // dont do this mistake ---> len_strs+=i; // if u do this the i value will not be updatede
            i+=len_strs;

            //others alternative instead of i=del_pos +1; and i+=len_strs; just do
            //i+=del_pos+1+len_strs; (move i to the next number)

        }
        return decode;


    }

    private:
    const char seperator='#';
};
