class Solution {
public:
    int calPoints(vector<string>& operations) {
      stack<int>record;
    
      for(auto op:operations){

        if(op=="+"){
            int num1=record.top();
            record.pop();
            int num2=record.top();

            int add=num1+num2;

            record.push(num1);
            record.push(add);
        }
        else if(op=="D"){
            //D will double previous int
            int num=record.top();
            int doub=num*2;
            record.push(doub);
        }
        else if(op=="C"){
            record.pop();//pop the top
        }
        else{
            //if it encounter the number
            int nums=stoi(op);
            record.push(nums);
        }
      }

      //calculating the sum
      int sum=0;
    //   for(auto a:record){
    //     sum+=record;
    //   }
    while(!record.empty()){
        sum+=record.top();
        record.pop();
    }
      return sum;


    }
};