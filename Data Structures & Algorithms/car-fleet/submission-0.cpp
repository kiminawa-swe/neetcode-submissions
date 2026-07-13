class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        //pair each position and speed first

        vector<pair<int,int>>pos_sped;

        for(int i=0;i<position.size();i++){
            pos_sped.push_back({position[i],speed[i]});
        }
        //sorting the car in descending order of miles

        sort(pos_sped.rbegin(),pos_sped.rend()); //Instead of normal iterators, you can use "reverse iterators." These tell C++ to read the array backwards, which naturally sorts it in descending order.
        
        //time =(target-position)/speed and store it in stack
        stack<double>time;

        for(int i=0;i<pos_sped.size();i++){
            //use double for more accurate calculataion
            double t=(double)(target-pos_sped[i].first)/pos_sped[i].second;

            if(time.empty()){
                time.push(t);
            }
            else if(!time.empty() && t>time.top()){
                time.push(t);
            }
            else if(t<=time.top()){
                continue;
            }
        }

        return time.size();
        



    }
};
