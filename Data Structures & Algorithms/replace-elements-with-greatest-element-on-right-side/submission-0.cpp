class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //first method is changing the array
        //start from behind until 0
        //we declared max_current =-1; as we want to change last element into -1
        int n=arr.size();
        int max_current=-1;
        for(int i=n-1;i>=0;i--){
            //temporary
            int temp=arr[i];
            arr[i]=max_current;
            max_current=max(temp,max_current);
        }

        return arr;
    }
};