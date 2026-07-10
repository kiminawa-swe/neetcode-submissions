class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int>temp(temperatures.size());

        for(int i=0;i<temperatures.size();i++){

            int dayCount=1;
            int j=i+1;

            while(j<temperatures.size()){

                if(temperatures[i]<temperatures[j]){
                    break;
                }

                j++;
                dayCount++;

            }

            if(j==temperatures.size()){
                temp[i]=0;
            }
            else{
                            temp[i]=dayCount;

            }


        }

        return temp;

        
    }
};
