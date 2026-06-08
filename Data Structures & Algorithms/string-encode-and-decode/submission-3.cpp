class Solution {
public:

    string encode(vector<string>& strs) {

        //initiate empty string
        std::string encode;

        for(std::string s:strs){
            encode+= to_string(s.size())+seperator+s;
        }
        return encode;

    }

    vector<string> decode(string s) {
        vector<string> decode;

        int i=0;
        while(i<s.length()){
            //finding seperator position
            size_t seperatorPos=s.find(seperator,i);
            //finding the length of the string
            int length= stoi(s.substr(i,seperatorPos-i)); // i= the first digit position, seperatorPos -i,so we can get the length
            i=seperatorPos+1;
            std::string strs=s.substr(i,length);
            
            decode.push_back(strs);
            i+=length; //dont forget to add length to next seperator

        }
        return decode;

    }

    private:
    const char seperator='#';
};
