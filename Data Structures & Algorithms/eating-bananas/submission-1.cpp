class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        //int hour=h/n; //hours given per section

        int maxPile=0;
        //int k=0;

        for(int p:piles){
            maxPile=max(maxPile,p);
        }

        int right=maxPile;

        int rate=right;// this is the highest rate, but we want lower than this rate
        int left=1;

        while(left<=right){
            int mid=left+(right-left)/2; //mid now consider as rate

            int total_hours=0;
            for(int p:piles){

                // We use the (double) cast and ceil() to ensure it rounds UP.
                // Example: Pile is 7, speed is 3. 7/3 = 2.33 -> rounds up to 3 hours.
                long int hours = ceil((double)p / mid);


                

                total_hours+=hours;


            }

            if(total_hours<=h){
                rate=mid;
                //can we find slower than this
                //so we put the right at the left half
                right=mid-1;

            }
            else{
                //the total hours exceeded time limit
                //thus find faster speed
                left=mid+1;

            }








        }

return rate;
        

        


    }
};
