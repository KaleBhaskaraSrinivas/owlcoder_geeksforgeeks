class Solution{
    int minEle;
    stack<int> s,ss;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(ss.size()==0){
               return -1;
           }
           return ss.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.size()==0){
               return -1;
           }
           int ans=s.top();
           s.pop();
           if(ans==ss.top()){
               ss.pop();
           }
           return ans;
       }
       
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
           if(ss.size()==0 or x<=ss.top()){
               ss.push(x);
           }
       }
};
