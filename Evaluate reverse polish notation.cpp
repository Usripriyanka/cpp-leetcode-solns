class Solution {
stack<int> st;    
public:
    int evalRPN(vector<string>& tokens) {
        for(string s:tokens){
            if(s=="+" || s=="-" || s=="*" || s=="/"){
                int top2=st.top();st.pop();
                int top1=st.top();st.pop();
                int res=0;
                if(s=="+") res=top1+top2;
                else if(s=="-")res=top1-top2;
                else if(s=="*")res=top1*top2;
                else if(s=="/") res=top1/top2;
                st.push(res);
                }
                else{
                    st.push(stoi(s));}}
                
            
            return st.top();
            
            
        }
    
};
