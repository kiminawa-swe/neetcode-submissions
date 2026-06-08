class Solution {
public:

    string encode(vector<string>& strs) {
        //initialize an empty string
        std::string encode;
        

        for(std::string s:strs){
            encode += to_string(s.size())+seperator+s;
            
        }
        return encode;

    }

    vector<string> decode(string s) {
        //substr syntax , substr(pos,len); pos is the index char positon of string and len is the length
        // find() syntax, find(target, start_position)
        vector<string> decode;
        int i=0;
        while(i<s.size()){
            size_t seperatorPos=s.find(seperator,i); // finding first seperator starting at index i
            int length= stoi(s.substr(i,seperatorPos-i)); //stoi convert string to integer
            i=seperatorPos +1; //change i index to get into first char of targetted string
            std::string str=s.substr(i,length); //slice the string 
            decode.push_back(str);
            i+= length ; //update the next index after the extended string
        }
        return decode;

    }

    private:
    const char seperator='#';
};
