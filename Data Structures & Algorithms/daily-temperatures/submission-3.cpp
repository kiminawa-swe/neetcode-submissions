class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        //int dayCount=1;
    

        vector<int>temp(temperatures.size());

        for(int i=0;i<temperatures.size();i++){
            //initial dayCount here as to reset from 1 again
            int dayCount=1; //start again after each iteration
            int nextDay=i+1;

            while(nextDay<temperatures.size()){
                if(temperatures[i]<temperatures[nextDay]){
                    break;
                }
                else{
                    nextDay++;
                    dayCount++;
                }
            }

            //if indices nextDay at last position (means no warmer days found)
            if(nextDay==temperatures.size()){
                //temp[i].push_back(0); //cant use push_back because in vector there will be 0s filled
                temp[i]=0;
            }
            else{
                //temp[i].push_back(dayCount); //same case with temp[i].push_back(0);
                temp[i]=dayCount;
            }
            

            }
    
        return temp;
    }
};
