class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int maxVol=0;
        int left=0;
        int right=heights.size()-1;
       
       

        while(left<right){

           
                int vol=(right-left)*(min(heights[left],heights[right]));
                maxVol=max(maxVol,vol);


                //find the shorter line 

                if(heights[left]<heights[right]){
                    left++;
                }
                else{
                    right--; //if the height of left pointer higher than right
                }
                
                

            


        }

        return maxVol;


    }
};
